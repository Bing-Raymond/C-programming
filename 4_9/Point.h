#pragma once
class Point
{
private:
  float px;
  float py;
public:
  Point() { px = 0; py = 0; };
  Point(float x, float y) { px = x; py = y; }
  ~Point()
  {
  }
  // 友元，声明Rectangle 是 我的朋友，它可以直接使用我Point的私有成员。
  friend class Rectangle;
};