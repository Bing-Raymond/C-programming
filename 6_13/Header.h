#pragma once
 // 动态创建对象。
#include <iostream>
class Point
{
private:
  int X;
  int Y;
public:
  Point()
  {
    X = Y = 0;
    std::cout << "Default Constructor called." << std::endl;
  }
  Point(int xx, int yy)  // 不能这样写，因为有缺省的值，这些值是可以没有的。如果没有，xx和yy，那么这个函数相当于：Point() 所以后面建对象的时候会报错。
  { 
    X = xx; 
    Y = yy; 
    std::cout << "Constructor called." << std::endl; 
  }  // 带参数的构造函数。
  Point(Point& p);    // copy 构造函数。需要实现！

  ~Point() { std::cout << "Destructor called." << std::endl; }
  int getX() { return X; }
  int getY() { return Y; }
  static void getC() { std::cout << " Object id = " <<  std::endl; }
  void move(int x, int y)
  {
    X = x;
    Y = y;
  }
public:
  // 创建一个指向类静态数据成员的指针。
  static int countP;
};