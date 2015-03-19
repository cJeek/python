#ifndef __TEST_H__
#define __TEST_H__
#include <iostream>
using namespace std;
class Time
{
public :
   void set_time( );//公用成员函数
   void show_time( );//公用成员函数
private : //数据成员为私有
   int hour;
   int minute;
   int sec;
};
struct Vector {
		double x,y,z;
};

#endif //__TEST_H__
