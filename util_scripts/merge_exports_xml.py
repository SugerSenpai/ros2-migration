import os
import xml.etree.ElementTree as ET

def merge_exports(package_xml_path):
    try:
        tree = ET.parse(package_xml_path)
        root = tree.getroot()

        # Find all export elements
        export_elements = root.findall('export')

        if len(export_elements) <= 1:
            print(f"No multiple export tags found, or only one export tag present in {package_xml_path}.")
            return

        # Create a new export element
        new_export = ET.Element('export')

        # Merge all children of export elements into the new export element
        for export in export_elements:
            for child in export:
                new_export.append(child)

        # Remove old export elements
        for export in export_elements:
            root.remove(export)

        # Append the new merged export element
        root.append(new_export)

        # Write the modified XML back to the file
        tree.write(package_xml_path, encoding='utf-8', xml_declaration=True)
        print(f"Merged {len(export_elements)} <export> tags into one in {package_xml_path}.")
    except Exception as e:
        print(f"Failed to process {package_xml_path}: {e}")

def find_package_xml_files(root_dir):
    package_xml_files = []
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename == 'package.xml':
                package_xml_files.append(os.path.join(dirpath, filename))
    return package_xml_files

def merge_exports_in_all_package_xml_files(root_dir):
    package_xml_files = find_package_xml_files(root_dir)
    for package_xml in package_xml_files:
        merge_exports(package_xml)

# Path to the root directory where your ROS2 workspace is located
root_dir = '/ros2-migration/arena'

# Call the function to merge exports in all found package.xml files
merge_exports_in_all_package_xml_files(root_dir)
