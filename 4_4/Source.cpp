// 类的组合，线段(Line)类
#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

// 拷贝构造函数的实现
Point::Point(Point& p)
{
  X = p.X;
  Y = p.Y;
  cout << "Point 拷贝构造函数被调用。" << endl;
}

// 组合类的构造函数
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2)
{
  cout << "Line 构造函数被调用。" << endl;
  double x = double(p1.getX() - p2.getX());
  double y = double(p1.getY() - p2.getY());
  len = sqrt(x * x + y * y);
}

// 组合类的拷贝构造函数
Line::Line(Line& L) :p1(L.p1), p2(L.p2)
{
  cout << "Line 拷贝构造函数被调用。" << endl;
  len = L.len;
}


int main()
{
  Point myp1(1, 1), myp2(4, 5);
  Line line(myp1, myp2);
  Line line2(line);
  cout << "The length of the line is:";
  cout << line.getLen() << endl;
  cout << "The length of the line2 is:";
  cout << line2.getLen() << endl;
  return 0;
}