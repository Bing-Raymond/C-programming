#pragma once
// ʹ��ָ��������Point��ĳ�Ա��
// ���ʶ���Ĺ��г�Ա�����Ĳ�ͬ��ʽ��
#include <iostream>
class Point
{
private:
  int X;
  int Y;
public:
  Point(int xx = 0, int yy = 0) { X = xx; Y = yy; countP++; }  // ��ȱʡ�����Ĺ��캯������xx��yy�൱�� Point(x,y); û��xx,yy�൱�� Point()!
  Point(Point& p);    // copy ���캯������Ҫʵ�֣�
  int getX() { return X; }
  int getY() { return Y; }
  static void getC() { std::cout << " Object id = " << countP << std::endl; }
public:
  // ����һ��ָ���ྲ̬���ݳ�Ա��ָ�롣
  static int countP;
};