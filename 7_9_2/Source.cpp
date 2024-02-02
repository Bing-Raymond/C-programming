#include "Header.h"
int main()
{
  Derived d;
  d.fn1();
  cout << "调用基类的fn2 方法：" << d.fn2() << endl;

}