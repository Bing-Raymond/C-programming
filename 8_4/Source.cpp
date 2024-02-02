#include "Header.h"
int main()
{
  B0 b0, *pB;   // 基类指针，指向子类对象，如果是虚函数，就会调用子类的方法，而不是基类的方法！
  B1 b1;
  D1 d1;
  pB = &b0;
  fun(pB);
  pB = &b1;
  fun(pB);
  pB = &d1;
  fun(pB);

}

/*
B0::display
B1::display()
D1::display()
*/