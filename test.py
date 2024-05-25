import os

def remove_lines(file_path, lines_to_remove):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    with open(file_path, 'w') as file:
        for line in lines:
            if not any(remove_line in line for remove_line in lines_to_remove):
                file.write(line)

def process_cmake_lists(dir_path):
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            if file == "CMakeLists.txt":
                file_path = os.path.join(root, file)
                lines_to_remove = ["find_package(REQUIRED REQUIRED)", "ament_export_dependencies(REQUIRED)"]
                remove_lines(file_path, lines_to_remove)

# Replace 'path_to_your_directory' with the directory path containing the "arena" folder
process_cmake_lists('/ros2-migration/arena')
