#include <iostream>
#include "Header.h"
int main()
{
  X x;
  Z z;
  z.f(&x);
  x.show();
}