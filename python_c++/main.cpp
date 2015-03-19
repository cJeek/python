#include "test.h"
int main( )
{
   Time t1;//定义对象t1
   t1.set_time( );//调用对象t1的成员函数set_time，向t1的数据成员输入数据
   t1.show_time( );//调用对象t1的成员函数show_time，输出t1的数据成员的值
   Time t2;//定义对象t2
   t2.set_time( );//调用对象t2的成员函数set_time，向t2的数据成员输入数据
   t2.show_time( );//调用对象t2的成员函数show_time，输出t2的数据成员的值
   return 0;
}
