from setuptools import find_packages
from setuptools import setup

setup(
    name='cob_control_msgs',
    version='0.8.20',
    packages=find_packages(
        include=('cob_control_msgs', 'cob_control_msgs.*')),
)
