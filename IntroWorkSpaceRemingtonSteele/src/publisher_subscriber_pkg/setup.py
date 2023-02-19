from setuptools import setup

package_name = 'publisher_subscriber_pkg'

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
    maintainer='remington',
    maintainer_email='rsteele2215@sdsu.edu',
    description='Mechatronics Intro Project',
    license='My License',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = publisher_subscriber_pkg.timepublisher:main', 
            'listener = publisher_subscriber_pkg.timesubscriber:main' 
        ],
    },
)
