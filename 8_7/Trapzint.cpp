#include "Trapzint.h"
double Trapz::operator()(double a, double b, double eps) const
{                                             // 积分运算过程，重载为运算符()
  int done(0);                                // 是Trapz类的虚函数成员
  int n;
  double h, Tn, T2n;
  n = 1;
  h = b - a;                                  // 计算 n = 1 时的积分值
  Tn = h * (f(a) + f(b)) / 2.0;
  while (!done)
  {
    double temp(0.0);
    for (int k = 0; k < n; k++)
    {
      double x = a + (k + 0.5)*h;
      temp += f(x);
    }
    T2n = (Tn + h * temp) / 2.0;              // 变步长梯形法计算
    if (fabs(T2n - Tn) < eps) done = 1;       // 判断积分误差
    else                                      // 进行下一步计算
    {
      Tn = T2n;
      n *= 2;
      h /= 2;
    }
  }
  return T2n;
}