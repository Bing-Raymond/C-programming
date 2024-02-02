// 变步长梯形积分法求解函数的定积分
// Fun 就是f（x）
// 通过重载操作符() 实现，牛逼啊。                
// Trapzl 是对f(x)的积分。

#pragma once
#include <iostream>
using namespace std;
class F                                       // 抽象类F的声明
{
public:
  virtual double operator()(double x) const = 0;
};

class Fun :public F
{
public:
  double operator()(double x) const          // 虚函数的内联实现
  {
    return log(1.0 + x) / (1.0 + x * x);     // 被积函数
  }
};

class Integ                                  // 抽象类Integ声明
{
public:
  virtual double operator()(double a, double b, double eps) const = 0;
};

class Trapz :public Integ                    // 公有派生类Trapz声明
{
public:
  Trapz(const F&pf) :f(pf) {}                // 构造函数
  double operator() (double a, double b, double eps) const;
private:
  const F& f;                                // 私有成员，F类对象的指针
};
// End of file Trapzint.h