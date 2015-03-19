#!/usr/bin/python
#coding=utf-8 
#调用libc里的printf
import ctypes  
from ctypes.util import find_library  
  
printf = ctypes.CDLL(find_library("c")).printf  
  
printf("hello, world\n")  
