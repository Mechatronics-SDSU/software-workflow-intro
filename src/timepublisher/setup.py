from setuptools import setup

package_name = 'timepublisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Tyler Schwenk',
    maintainer_email='vboxuser@todo.todo',
    description='Mechatronics Intro Project',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'talker = timepublisher.publisher_member_function:main',
        	'listener = timepublisher.subscriber_member_function:main',
        ],
    },
)
