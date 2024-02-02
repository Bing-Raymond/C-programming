#include "Header.h"
int main()
{
  D1 d1;
  d1.nV = 1;
  d1.fun();

  // 还能这么操作？ 学习了！
  d1.B1::nV = 2;
  d1.B1::fun();

  d1.B2::nV = 3;
  d1.B2::fun();

  // 使用D2
  D2 d2;
  // d2.nV = 4;  // 错误，因为D2并没有定义nV，而且基类B1与B2都有nV。
  // d2.fun();   // 同上
  d2.B1::nV = 4;
  d2.B1::fun();

  d2.B2::nV = 6;
  d2.B2::fun();
}

/*
Member of D1 // 不管有没有重载，只要同名，基类的fun都会被隐藏。
Member of B1 // 只有d1.B1：：fun 才能call到基类B1的fun
Member of B2                            

输出结果。

*/