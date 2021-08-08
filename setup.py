
from setuptools import setup, Extension


setup(
    name='licentra',
    version='0.0.4',
    description='Python Package with Hello World C Extension',
    ext_modules=[
        Extension(
            'licentra',
            sources=['licentra.cpp'],
            py_limited_api=True)
    ],
)