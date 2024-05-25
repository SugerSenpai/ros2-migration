import os

def replace_lines_in_files(dir_path, file_extension, lines_to_replace, replacement_lines):
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            if file.endswith(file_extension):
                file_path = os.path.join(root, file)
                with open(file_path, 'r') as file:
                    lines = file.readlines()
                with open(file_path, 'w') as file:
                    for line in lines:
                        replaced = False
                        for old_line, new_line in zip(lines_to_replace, replacement_lines):
                            if old_line in line:
                                file.write(line.replace(old_line, new_line))
                                replaced = True
                                break
                        if not replaced:
                            file.write(line)

def process_cmake_lists(dir_path):
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            if file == "CMakeLists.txt":
                file_path = os.path.join(root, file)
                lines_to_replace = ["ament_export_include_directories"]
                replacement_lines = ["include_directories"]
                replace_lines(file_path, lines_to_replace, replacement_lines)

# Replace 'path_to_your_directory' with the directory path containing the "arena" folder
dir_path = '/ros2-migration/arena'
file_extension = '.cpp'
lines_to_replace = ["<std_srvs/Trigger.h>", "#include #include <std_srvs/srv/trigger.hpp>"]
replacement_lines = ["#include <std_srvs/Trigger.h>", "#include <std_srvs/srv/trigger.hpp>"]
replace_lines_in_files(dir_path, file_extension, lines_to_replace, replacement_lines)
