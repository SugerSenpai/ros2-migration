from setuptools import find_packages
from setuptools import setup

setup(
    name='cob_base_controller_utils',
    version='0.8.18',
    packages=find_packages(
        include=('cob_base_controller_utils', 'cob_base_controller_utils.*')),
)
