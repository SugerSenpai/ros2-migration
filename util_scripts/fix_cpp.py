import os
import re

def replace_code_snippets(root_dir):
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.cpp'):
                file_path = os.path.join(dirpath, filename)
                with open(file_path, 'r') as file:
                    file_content = file.read()

                # Replace rclcpp::Time::now() with this->now()
                new_content = re.sub(r'rclcpp::Time::now\(\)', r'this->now()', file_content)

                # Replace .publish(mk) with ->publish(mk)
                new_content = re.sub(r'\.publish\((.*?)\)', r'->publish(\1)', new_content)

                # Write the new content back to the file if changes were made
                if new_content != file_content:
                    with open(file_path, 'w') as file:
                        file.write(new_content)
                    print(f'Processed file: {file_path}')

# Replace 'your_directory_path' with the path to your directory
replace_code_snippets('arena')
