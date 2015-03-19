
rm *.o *.so *cxx *.py
swig -python -c++ test.i
g++ -O2 -fPIC -c test.cpp 
g++ -O2 -fPIC -c test_wrap.cxx -I/usr/include/python2.7
g++ -shared test.o test_wrap.o -o _test.so

python
