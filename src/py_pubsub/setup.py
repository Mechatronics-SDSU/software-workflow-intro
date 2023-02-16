from setuptools import setup

package_name = 'py_pubsub'

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
    maintainer='jkeus',
    maintainer_email='jkeus6819@sdsu.edu',
    description='nodeHR pubs epoch time(sec) nodeS subs, node S converts and pubs, nodeHR subs to this',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'timepublisher = py_pubsub.publisher_member_function:main',
            'timesubscriber = py_pubsub.subscriber_member_function:main',
        ],
    },
)
