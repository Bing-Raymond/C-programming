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
    // 如果不是友元类，下面点后面的内容，都无法点出来，只能点出公共成员！
    pLift.px = pL.px; 
    pLift.py = pL.py; 
    pRight.px = pR.px;
    pRight.py = pR.py;
  }
  // 需要加上大括号！
  Rectangle(){};
  ~Rectangle(){};
  float getArea() const;
};