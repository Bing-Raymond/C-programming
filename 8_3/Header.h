// ���������Ϊ��Ԫ����
// ��������Ӽ�����������Ϊ��Ԫ������ʽ
#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:
  Complex(double r = 0.0, double i = 0.0) { real = r; imag = i; }
  friend Complex operator + (Complex c1, Complex c2);
  friend Complex operator - (Complex c1, Complex c2);
  void display()const;
private:
  double real;
  double imag;
};
