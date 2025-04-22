from setuptools import find_packages, setup

package_name = 'tiago_control'

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
    maintainer='hv',
    maintainer_email='hv@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
    'console_scripts': [
        'move_tiago_arm = tiago_control.move_tiago_arm:main',
    ],
    },
)
