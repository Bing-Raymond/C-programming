#include "Header.h"
int main()
{
  A a;
  // 无法直接访问protected 的成员！
  // a.x = 5;
  B b;
  b.function();
}