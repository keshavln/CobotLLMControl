from setuptools import find_packages, setup

package_name = 'moveit_pytest'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='harshwadibhasme',
    maintainer_email='harsh.wadibhasme@addverb.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'moveit_test = moveit_pytest.moveit_test:main',
            'plan_and_execute = moveit_pytest.plan_and_execute:main',
            'cobotkeyboard = moveit_pytest.cobotkeyboard:main',
            'cobotrotate = moveit_pytest.cobotrotate:main',
            'movecoord = moveit_pytest.movecoord:main',
            'cobotcheckpoint = moveit_pytest.cobotcheckpoint:main',
            'grippercontrol = moveit_pytest.grippercontrol:main',
            'cobotdetection = moveit_pytest.cobotdetection:main',
            'cobotdetection2 = moveit_pytest.cobotdetection2:main',
            'cobotdetection3 = moveit_pytest.cobotdetection3:main',
            'viewer = moveit_pytest.viewer:main'
        ],
    },
)
