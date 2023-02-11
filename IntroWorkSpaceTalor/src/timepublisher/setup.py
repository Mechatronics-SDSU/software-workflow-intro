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
    maintainer='Talor Gittin',
    maintainer_email='Talor1232@gmail.com',
    description='Unix date to human date',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = timepublisher.publisher:main',
        ],
    },
)
