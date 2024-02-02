#pragma once

// 学习类的兼容性
// 类型兼容性规则是指，在需要基类对象的任何地方，都可以使用公有派生类的对象来替代！

// 派生类的对象可以复制给基类对象。
// 派生类的对象可以初始化基类的引用。
// 派生类对象的地址可以赋值给基类的指针？
// 但是只能使用从基类继承过来的公有的方法了。派生类自己的同名方法不会被调用！f
// 牛逼啊。不懂。
// 在替代之后，派生类对象 就可以作为 基类的对象 使用，但只能使用从基类继承的成员。
#include <iostream>
using namespace std;
class B0
{
public:
  B0();
  ~B0();
  void display() const { cout << "B0::display()" << endl; }

private:

};

B0::B0()
{
}

B0::~B0()
{
} 

class B1 : public B0
{
public:
  void display() const { cout << "B1::display()" << endl; }
};

class D1 :public B1
{
public:
  void display() const { cout << "D1::display()" << endl; }
};

