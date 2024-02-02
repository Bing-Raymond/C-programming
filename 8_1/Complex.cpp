#include "Complex.h"
Complex Complex::operator+(Complex c2)
{
  return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator-(Complex c2)
{
  return Complex(real - c2.real, imag - c2.imag);
}

void Complex::display()const
{
  cout << "Real: " << real << " imag: " << imag << endl;
}