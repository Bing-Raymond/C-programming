#pragma once
// 声明一个基类Shape,在此基础上派生出Rectangle和Circle,二者都有GetArea()函数计算对象的面积。使用Rectangle类创建一个派生类Square

// Shape 形状
// Rectangle 矩形
// Circle 圆形
// Square 正放形

// 类里的虚函数有什么用？

// 虚函数的作用：通过以下两个程序来进行解释！
/*
可以让成员函数操作一般化，-> 用基类的指针指向不同的派生类的对象时，
基类指针调用其虚成员函数，则会调用其真正指向对象的成员函数，
而不是基类中定义的成员函数（只要派生类改写了该成员函数）。
若不是虚函数，则不管基类指针指向的哪个派生类对象，调用时都
会调用基类中定义的那个函数。

*/

#include <iostream>
using namespace std;
class Shape
{
public:
  Shape() {};
  ~Shape() {};
  virtual float getArea() { return -1; }
  virtual float getLength() { return -1; }
};

class Rectangle :public Shape
{
private:
  float itsLength;
  float itsWidth;

public:
  Rectangle(float len, float width):itsLength(len),itsWidth(width) {};
  ~Rectangle() {};
  virtual float getArea() { return itsLength * itsWidth; }
  virtual float getLength() { return itsLength; }
  virtual float getWidth() { return itsWidth; }
};

class Circle :public Shape
{
private:
  float itsRadius;
public:
  Circle(float radius):itsRadius(radius) {};
  ~Circle() {}
  float getArea() { return itsRadius * itsRadius*3.14; }
};

class Square :public Rectangle
{
public:
  Square(float len) :Rectangle(len, len) {};
  ~Square() {}
};
