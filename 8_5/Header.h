// 虚析构函数，如果一个类的析构函数是虚函数，那么它派生出来的所有子类的析构函数也是虚函数。
// 使用指针引用时，可以动态绑定，实现运行时的堕胎，保证使用积累类型的指针就能够调用适当的析构函数针对不同的对象进行清理工作。
// 先看没有使用虚函数的类。
// 从运行结果看，由于动态多态的原因，析构的时候，没有正确析构建立的对象。
// 解决这个问题，需要将基类的析构修改为虚函数。
#pragma once
#include <iostream>
using namespace std;
class Base
{
public:
  //~Base()
  //{
  //  cout << " Base destructor\n";
  //}
  virtual ~Base()
  {
    cout << "Base destructor\n";
  }

};

class Derived :public Base
{
public:
  Derived();
  ~Derived();
private:
  int *i_pointer;
};

Derived::Derived()
{
  i_pointer = new int(0);
}
Derived::~Derived()
{
  cout << "Derived destructor\n";
  delete i_pointer;
}

void fun(Base* b)
{
  delete b;
}
