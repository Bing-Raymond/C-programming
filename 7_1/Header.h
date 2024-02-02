#pragma once
// 例 7-1 Point 类公有继承
// 公有继承基类的类，可以直接使用基类的公有方法。
class Point
{
public:
  void initP(float xx = 0, float yy = 0) { X = xx; Y = yy; }
  void move(float xOff, float yOff) { X += xOff; Y += yOff; }
  float getX() const { return X; }
  float getY() const { return Y; }
private:
  float X, Y;
};

class Rectangle :public Point   // 派生类声明部分，公有继承基类。
{
public:
  void initR(float x, float y, float w, float h)
  {
    initP(x, y);   // 调用积累的构造函数，这样可以封装基类Point
    W = w;
    H = h;
  }

  float getH()const { return H; }
  float getW()const { return W; }

private:
  float W, H;                // 新增私有成员。
};