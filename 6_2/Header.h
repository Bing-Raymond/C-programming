#pragma once

class Point
{
private:
  float X;
  float Y;
public:
  Point(float xx = 0.0, float yy = 0.0) { X = xx; Y = yy; }
  float getX() { return X; }
  float getY() { return Y; }
  friend float lineFit(Point l_point[], int n_point);
};
