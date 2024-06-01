import os
import shutil
import pathspec

def read_gitignore():
    with open('.gitignore', 'r') as file:
        lines = file.read().splitlines()
    return lines

def delete_ignored_files(root_dir='.'):
    patterns = read_gitignore()
    spec = pathspec.PathSpec.from_lines('gitwildmatch', patterns)

    # Iterate over all files and directories
    for root, dirs, files in os.walk(root_dir, topdown=False):
        # Check files
        for file_name in files:
            file_path = os.path.relpath(os.path.join(root, file_name), start=root_dir)
            if spec.match_file(file_path):
                try:
                    print(f"Deleting file: {file_path}")
                    os.remove(file_path)
                except FileNotFoundError:
                    print(f"File not found, skipping: {file_path}")
                except PermissionError:
                    print(f"Permission denied, skipping: {file_path}")
        
        # Check directories
        for dir_name in dirs:
            dir_path = os.path.relpath(os.path.join(root, dir_name), start=root_dir)
            full_dir_path = os.path.join(root, dir_name)
            if spec.match_file(dir_path):
                try:
                    if os.path.islink(full_dir_path):
                        print(f"Deleting symbolic link: {dir_path}")
                        os.unlink(full_dir_path)
                    else:
                        print(f"Deleting directory: {dir_path}")
                        shutil.rmtree(full_dir_path)
                except FileNotFoundError:
                    print(f"Directory not found, skipping: {dir_path}")
                except PermissionError:
                    print(f"Permission denied, skipping: {dir_path}")

    # Remove any empty directories
    for root, dirs, files in os.walk(root_dir, topdown=False):
        for dir_name in dirs:
            full_dir_path = os.path.join(root, dir_name)
            try:
                if not os.listdir(full_dir_path):
                    print(f"Deleting empty directory: {full_dir_path}")
                    os.rmdir(full_dir_path)
            except FileNotFoundError:
                print(f"Directory not found, skipping: {full_dir_path}")
            except PermissionError:
                print(f"Permission denied, skipping: {full_dir_path}")

if __name__ == "__main__":
    delete_ignored_files()
    print("All ignored files and directories have been deleted.")
