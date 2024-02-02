#pragma once
#include <iostream>
#include "Point.h"
class Rectangle
{
private:
  Point pLift;
  Point pRight;
public:
  Rectangle(Point pL, Point pR) 
  {
    // ���������Ԫ�࣬������������ݣ����޷��������ֻ�ܵ��������Ա��
    pLift.px = pL.px; 
    pLift.py = pL.py; 
    pRight.px = pR.px;
    pRight.py = pR.py;
  }
  // ��Ҫ���ϴ����ţ�
  Rectangle(){};
  ~Rectangle(){};
  float getArea() const;
};