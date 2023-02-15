from setuptools import setup

package_name = 'time_pubsub'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Alex Prochazka',
    maintainer_email='alexprosd@gmail.com',
    description='Contains 2 nodes which generate the unix epoch time and convert it to standard format',
    license='Apache 2.0',
    tests_require=['pytest'],
entry_points={
        'console_scripts': [
                'pub = time_pubsub.timepublisher:main',
                'sub = time_pubsub.timesubscriber:main',
        ],
},
)
