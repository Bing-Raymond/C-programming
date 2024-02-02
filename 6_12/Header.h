#pragma once
// 使用指针来访问Point类的成员。
// 访问对象的公有成员函数的不同方式。
#include <iostream>
class Point
{
private:
  int X;
  int Y;
public:
  Point(int xx = 0, int yy = 0) { X = xx; Y = yy; countP++; }  // 带缺省参数的构造函数。有xx，yy相当于 Point(x,y); 没有xx,yy相当于 Point()!
  Point(Point& p);    // copy 构造函数。需要实现！
  int getX() { return X; }
  int getY() { return Y; }
  static void getC() { std::cout << " Object id = " << countP << std::endl; }
public:
  // 创建一个指向类静态数据成员的指针。
  static int countP;
};