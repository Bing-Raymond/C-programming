// 声明一个基类Base，由两个公有成员函数fn1（），fn2（），私有派生出Derived类，如何通过Derived类的对象调用基类的函数fn1（）？
#pragma once

#include <iostream>
using namespace std;
class Base
{
public:
  int fn1() const { return 1; }
  int fn2() const { return 2; }


};

// 在类里定义相同名字的方法，然后实现的时候，返回父类的方法即可!

class Derived :private Base
{
public:
  int fn1() { return Base::fn1(); }
  int fn2() { return Base::fn2(); }
};