import os
import re

def rename_invalid_fields(msg_file):
    with open(msg_file, 'r') as file:
        lines = file.readlines()

    pattern = re.compile(r'^(?P<type>\S+)\s+(?P<name>[A-Z][A-Za-z0-9_]*)$') #doesnt really work
    updated = False

    with open(msg_file, 'w') as file:
        for line in lines:
            match = pattern.match(line)
            if match:
                new_name = match.group('name').lower()
                new_line = f"{match.group('type')} {new_name}\n"
                file.write(new_line)
                updated = True
                print(f"Renamed {match.group('name')} to {new_name} in {msg_file}")
            else:
                file.write(line)

    return updated

def find_and_rename_invalid_fields(root_dir):
    for subdir, _, files in os.walk(root_dir):
        for file in files:
            if file.endswith('.msg'):
                msg_file = os.path.join(subdir, file)
                rename_invalid_fields(msg_file)

if __name__ == "__main__":
    workspace_dir = "/ros2-migration/arena"  # Change this to your workspace src directory
    find_and_rename_invalid_fields(workspace_dir)
    print("Completed renaming invalid fields.")
