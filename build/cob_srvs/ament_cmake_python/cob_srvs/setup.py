from setuptools import find_packages
from setuptools import setup

setup(
    name='cob_srvs',
    version='0.7.8',
    packages=find_packages(
        include=('cob_srvs', 'cob_srvs.*')),
)
