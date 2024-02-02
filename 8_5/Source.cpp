#include "Header.h"
int main()
{
  Base* b = new Derived();
  fun(b);
}

/*
 Base destructor
*/

/*
运行结果2
将基类的析构修改为析构函数后。
Derived destructor
Base destructor
*/