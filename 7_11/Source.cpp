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

  //delete pB; // �ᱨ��Ϊʲô�� ��Ϊ�����˻�����
}

/*
�����������fn1
�����������fn2
���û����fn1
���û����fn2
���û����fn1
���û����fn2
�����������fn1
�����������fn2
���û����fn1
����������BoyClass ��fn3
*/