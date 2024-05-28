from setuptools import find_packages
from setuptools import setup

setup(
    name='arena_evaluation_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('arena_evaluation_msgs', 'arena_evaluation_msgs.*')),
)
