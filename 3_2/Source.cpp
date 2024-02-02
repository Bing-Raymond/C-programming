// 编写重载函数Max1，可分别求取2个整数，3个整数，2个双精度数，3个双精度数的最大值。
#include <iostream>
int Max1(int a, int b);
int Max1(int a, int b, int c);
double Max1(double a, double b);
double Max1(double a, double b, double c);

int main()
{
  int a = 10;
  int b = 11;
  std::cout << "最大值：" << Max1(a, b) << std::endl;
  int c = 90;
  std::cout << "最大值：" << Max1(a, b, c) << std::endl;


  double d1 = 20.3;
  double d2 = 90.6;
  std::cout << "最大值： " << Max1(d1, d2) << std::endl;
  double d3 = 100.3;
  std::cout << "最大值： " << Max1(d1, d2, d3) << std::endl;
}

int Max1(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
    return b;
}
int Max1(int a, int b, int c)
{
  if (c > Max1(a, b))
    return c;
  else
    return Max1(a, b);
}

double Max1(double a, double b)
{
  if (a > b)
  {
    return a;
  }
  else
    return b;
}

double Max1(double a, double b, double c)
{
  if (c > Max1(a, b))
    return c;
  else
    return Max1(a, b);
}

