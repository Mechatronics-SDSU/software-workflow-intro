from setuptools import setup

package_name = 'timepubsub'

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
    maintainer='dani',
    maintainer_email='dani@todo.todo',
    description='Timepublisher Mechatronics',
    license='Dani License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = timepubsub.timepublisher:main',
                'listener = timepubsub.timesubscriber:main',
        ],
    },
)
