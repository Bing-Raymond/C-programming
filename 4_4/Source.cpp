// �����ϣ��߶�(Line)��
#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

// �������캯����ʵ��
Point::Point(Point& p)
{
  X = p.X;
  Y = p.Y;
  cout << "Point �������캯�������á�" << endl;
}

// �����Ĺ��캯��
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2)
{
  cout << "Line ���캯�������á�" << endl;
  double x = double(p1.getX() - p2.getX());
  double y = double(p1.getY() - p2.getY());
  len = sqrt(x * x + y * y);
}

// �����Ŀ������캯��
Line::Line(Line& L) :p1(L.p1), p2(L.p2)
{
  cout << "Line �������캯�������á�" << endl;
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