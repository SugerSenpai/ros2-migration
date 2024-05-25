import os

def remove_lines_from_file(filepath, lines_to_remove):
    try:
        with open(filepath, 'r', encoding='utf-8') as file:
            lines = file.readlines()
    except UnicodeDecodeError:
        try:
            with open(filepath, 'r', encoding='ISO-8859-1') as file:
                lines = file.readlines()
        except UnicodeDecodeError:
            print(f"Could not read file {filepath} due to encoding issues.")
            return False
        except Exception as e:
            print(f"Unexpected error reading file {filepath} with ISO-8859-1 encoding: {e}")
            return False
    except Exception as e:
        print(f"Unexpected error reading file {filepath} with UTF-8 encoding: {e}")
        return False
    
    new_lines = []
    lines_removed = False
    
    for line in lines:
        if not any(line_to_remove in line for line_to_remove in lines_to_remove):
            new_lines.append(line)
        else:
            lines_removed = True
    
    if lines_removed:
        try:
            with open(filepath, 'w', encoding='utf-8') as file:
                file.writelines(new_lines)
        except Exception as e:
            print(f"Unexpected error writing file {filepath}: {e}")
            return False
    
    return lines_removed

def process_directory(directory, lines_to_remove):
    files_changed = 0
    
    for root, _, files in os.walk(directory):
        for file in files:
            if file == 'CMakeLists.txt':  # Check if the file is CMakeLists.txt
                filepath = os.path.join(root, file)
                print(f"Processing file: {filepath}")  # Log the file being processed
                try:
                    if remove_lines_from_file(filepath, lines_to_remove):
                        files_changed += 1
                        print(f"Modified file: {filepath}")  # Log the modification
                except Exception as e:
                    print(f"Unexpected error processing file {filepath}: {e}")
    
    return files_changed

if __name__ == "__main__":
    # Set the directory you want to process
    directory_to_process = "/ros2-migration/arena"
    # Set the lines you want to remove
    lines_to_remove = [
        "find_package(catkin REQUIRED)",
        "ament_export_dependencies(catkin)", 
        #"ament_export_dependencies(REQUIRED)"
    ]
    
    try:
        print(f"Starting processing in directory: {directory_to_process}")
        files_changed = process_directory(directory_to_process, lines_to_remove)
        print(f"Processing complete. {files_changed} files were modified.")
    except Exception as e:
        print(f"Unexpected error processing directory {directory_to_process}: {e}")
