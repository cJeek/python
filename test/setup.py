#!/usr/bin/env python

"""
setup.py file for SWIG C++ Python example
"""
from distutils.core import setup, Extension
example_module = Extension('_example',
sources=['example.cpp', 'example_wrap.cxx',],
)
setup (name = 'example',
version = '0.0.0.1',
author = "wangx_os@sari.ac.cn",
description = """Simple swig C++ Python example""",
ext_modules = [example_module],
py_modules = ["example"],
)
