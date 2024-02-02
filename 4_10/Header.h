#pragma once

#include <iostream>
using namespace std;

class Circle
{
private:
  float radius;
public:
  Circle(float r) { radius = r; }
  ~Circle() {}
  void setRadius(float r) { radius = r; }
  // 计算圆的面积。
  double getArea() const { return 3.14*radius*radius; };


};