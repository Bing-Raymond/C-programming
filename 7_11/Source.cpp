#include "Header.h"
int main()
{
  DerivedClass d;
  d.fn1();
  d.fn2();

  d.BaseClass::fn1() ;
  d.BaseClass::fn2() ;

  BaseClass* pBaseClass = new DerivedClass;
  
  pBaseClass->fn1();
  pBaseClass->fn2();
  
    DerivedClass myDerivedClass;
  pBaseClass = &myDerivedClass;
  pBaseClass->fn1() ;
  pBaseClass->fn2() ;
  //delete pBaseClass;

  BaseClass* pB;
  pB = new BoyClass;
  pB->fn1();
  pB->fn3();

  //delete pB; // 会报错？为什么？ 因为调用了基类吗？
}

/*
调用派生类的fn1
调用派生类的fn2
调用基类的fn1
调用基类的fn2
调用基类的fn1
调用基类的fn2
调用派生类的fn1
调用派生类的fn2
调用基类的fn1
调用派生类BoyClass 的fn3
*/