// 运算符重载 
// 使用复数的加减法来做例子。
#pragma once

#include <iostream>
using namespace std;
class Complex
{
public:
  Complex(double r = 0, double i = 0.0) { real = r; imag = i; };
  // 两元的操作，要少一个参数，因为this已经是一个参数了。
  // 返回值  操作符+ 参数表（一个就行）

  Complex operator+(Complex c2);
  Complex operator-(Complex c2);
  void display() const;
private:
  double real;
  double imag;

};