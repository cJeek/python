#!/usr/bin/env python  
#coding=utf-8 
#调用自己定义的lib
from ctypes import *  
foo = CDLL('./lib_test.so')  
myprint = foo.myprint  
#myprint.argtypes = [POINTER(c_char)]
#myprint.restype = c_char_p 
res = myprint('he****8***llo')  
print res  
  
add = foo.add  
add.argtypes = [c_float, c_float]
add.restype = c_float  
print add(1.3, 4.2) 
