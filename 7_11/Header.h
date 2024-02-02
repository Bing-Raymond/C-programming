// 声明一个基类BaseClass，从它派生出类DerivedClass,BaseClass由成员函数fn1（），fn2(),DerivedClass 也有成员函数fn1（），fn2（），
// 在主函数中声明一个DeerivedClass的对象，分别用DerivedClass的对象以及BaseClass和DerivedClass的指针来调用fn1（），fn2（），观察运行结果
#pragma once
#include <iostream>
using namespace std;
class BaseClass
{
public:
  int fn1() { cout << "调用基类的fn1 " << endl; return 1; }
  int fn2() { cout << "调用基类的fn2 " << endl; return 2; }

  virtual void fn3() { cout << "调用基类的fn3 " << endl; }
};

class DerivedClass :public BaseClass
{
public:
  int fn1() { cout << "调用派生类的fn1 " << endl; return 3; }
  int fn2() { cout << "调用派生类的fn2 " << endl; return 4; }
};

class BoyClass : virtual public BaseClass
{
public:
  int fn1() { cout << "调用派生类BoyClass 的fn1 " << endl; return 5; }
  void fn3() { cout << "调用派生类BoyClass 的fn3 " << endl; }
};

