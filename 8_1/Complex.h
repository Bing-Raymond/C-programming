// ��������� 
// ʹ�ø����ļӼ����������ӡ�
#pragma once

#include <iostream>
using namespace std;
class Complex
{
public:
  Complex(double r = 0, double i = 0.0) { real = r; imag = i; };
  // ��Ԫ�Ĳ�����Ҫ��һ����������Ϊthis�Ѿ���һ�������ˡ�
  // ����ֵ  ������+ ������һ�����У�

  Complex operator+(Complex c2);
  Complex operator-(Complex c2);
  void display() const;
private:
  double real;
  double imag;

};