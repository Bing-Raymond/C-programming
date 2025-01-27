#include <iostream>
#include "Header.h"
using namespace std;

float lineFit(Point l_point[], int n_point)
{
  float av_x, av_y;
  float L_xx, L_yy, L_xy;

  av_x = 0;
  av_y = 0;
  L_xx = 0;
  L_yy = 0;
  L_xy = 0;

  for (int i = 0; i < n_point; i++)
  {
    av_x += l_point[i].X / n_point;
    av_y += l_point[i].Y / n_point;
  }

  for (int i = 0; i < n_point; i++)
  {
    L_xx += (l_point[i].X - av_x)*(l_point[i].X - av_x);
    L_yy += (l_point[i].Y - av_y)*(l_point[i].Y - av_y);
    L_xy += (l_point[i].X - av_x)*(l_point[i].Y - av_y);
  }

  cout << "This line can be fitted by y = ax + b." << endl;
  cout << "a = " << L_xy / L_xx;
  cout << "b = " << av_y - L_xy * av_x / L_xx << endl;
  return float(L_xy / sqrt(L_xx*L_yy));
}

int main()
{
  Point l_p[10] = { Point(6,10), Point(14,20), Point(26,30), Point(33,40), Point(46,50), Point(54,60), Point(67,70), Point(75,80), Point(84,90), Point(100,100) };
  float r = lineFit(l_p,10);
  cout << "Line coefficient r = " << r << endl;
}