from setuptools import find_packages
from setuptools import setup

setup(
    name='addverb_cobot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('addverb_cobot_msgs', 'addverb_cobot_msgs.*')),
)
