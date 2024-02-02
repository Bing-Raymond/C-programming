#pragma once
// ����һ������Shape,�ڴ˻�����������Rectangle��Circle,���߶���GetArea()�����������������ʹ��Rectangle�ഴ��һ��������Square

// Shape ��״
// Rectangle ����
// Circle Բ��
// Square ������

// ������麯����ʲô�ã�

// �麯�������ã�ͨ�������������������н��ͣ�
/*
�����ó�Ա��������һ�㻯��-> �û����ָ��ָ��ͬ��������Ķ���ʱ��
����ָ����������Ա������������������ָ�����ĳ�Ա������
�����ǻ����ж���ĳ�Ա������ֻҪ�������д�˸ó�Ա��������
�������麯�����򲻹ܻ���ָ��ָ����ĸ���������󣬵���ʱ��
����û����ж�����Ǹ�������

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
