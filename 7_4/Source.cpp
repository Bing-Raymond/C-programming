#include "Header.h"

void fun(B0*ptr)  // 参数为指向基类对象的指针。
{
  ptr->display();
}

int main()
{
  B0 b0;          // 基类对象。
  B1 b1;          // 派生类 B1的对象
  D1 d1;          // 派生类 d1的对象
  B0* p;          // 一个基类的指针
  p = &b0;        // 指向基类对象
  fun(p);         // 调用fun，打出来是B0的display
  p = &b1;        // 指向派生类B1的对象。
  fun(p);         // 调用fun，打出来的是B0的display
  p = &d1;        // 指向派生类d1的对象
  fun(p);         // 调用fun，打出来的是B0的display
}