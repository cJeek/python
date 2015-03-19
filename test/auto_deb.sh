rm *.o *.so *cxx example.py *.pyc
swig -python -c++ example.i
python setup.py build_ext --inplace
echo "entering python environment"
python

