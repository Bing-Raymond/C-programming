#include "Header.h"
int main()
{
  B0* p;
  B1 b1;
  D1 d1;
  p = &b1;
  fun(p);
  p = &d1;
  fun(p);
}

/*
  B1::display()
  D1::display()
*/