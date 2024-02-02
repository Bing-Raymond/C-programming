#pragma once
class Point
{
public:
  Point(int xx = 0, int yy = 0) { X = xx; Y = yy; }
  Point(Point& p);
  double getX() { return X; }
  double getY() { return Y; }
private:
  double X, Y;
};

// ������
class Line
{
public:
  Line(Point xp1, Point xp2);
  Line(Line&);
  double getLen() { return len; }
private:
  Point p1, p2;  // ����point
  double len;
};