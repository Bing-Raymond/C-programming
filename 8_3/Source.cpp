#include"Header.h"
void Complex::display() const
{
  cout << "(" << real << "," << imag << ")" << endl;
}

Complex operator + (Complex c1, Complex c2)
{
  return Complex(c2.real + c1.real, c2.imag + c1.imag);
}

Complex operator - (Complex c1, Complex c2)
{
  return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main()
{
  Complex c1(5, 4), c2(2, 10), c3;
  cout <<"c1 = " << endl;
  c1.display();
  cout << "c2 = " << endl;
  c2.display();
  c3 = c1 - c2;
  cout << "c3 = c1 - c2 " << endl;
  c3.display();
  cout << "c3 = c1 + c2 " << endl;
  c3 = c1 + c2;
  c3.display();
}