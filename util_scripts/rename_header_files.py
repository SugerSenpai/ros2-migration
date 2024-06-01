import os

def rename_header_files(root_dir):
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith('.h'):
                old_file_path = os.path.join(dirpath, filename)
                new_file_path = os.path.join(dirpath, filename[:-2] + '.hpp')
                
                # Rename the file from .h to .hpp
                os.rename(old_file_path, new_file_path)
                print(f'Renamed file: {old_file_path} -> {new_file_path}')

# Replace 'your_directory_path' with the path to your directory
rename_header_files('arena')
