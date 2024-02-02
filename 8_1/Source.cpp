#include "Complex.h"
int main()
{
  Complex c1(5, 4), c2(2, 10), c3;
  cout << "c1 = ";
  c1.display();
  cout << "c2 = ";
  c2.display();
  c3 = c1 - c2;
  cout << "c3 = c1 - c2 ";
  c3.display();
  cout << "c3 = c1 + c2 ";
  c3 = c1 + c2;
  c3.display();
}