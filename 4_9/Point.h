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
  // ��Ԫ������Rectangle �� �ҵ����ѣ�������ֱ��ʹ����Point��˽�г�Ա��
  friend class Rectangle;
};