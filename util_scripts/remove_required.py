import os

def remove_required_from_cmake_lists(root_dir):
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename == "CMakeLists.txt":
                cmake_file_path = os.path.join(dirpath, filename)
                remove_required_lines(cmake_file_path)

def remove_required_lines(file_path):
    lines = []
    with open(file_path, 'r') as file:
        lines = file.readlines()

    with open(file_path, 'w') as file:
        for line in lines:
            if "find_package" in line and "REQUIRED REQUIRED" in line:
                continue
            file.write(line)

if __name__ == "__main__":
    root_dir = "/ros2-migration/arena"
    remove_required_from_cmake_lists(root_dir)
    print("Done removing 'find_package(REQUIRED REQUIRED)' lines from CMakeLists.txt files.")
