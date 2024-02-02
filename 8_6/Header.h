// 抽象类
// 带有纯虚函数的类。
// virtual 函数类型 函数名 （参数表） = 0；
#pragma once
#include <iostream>
using namespace std;
class B0 
{
public:
  B0 ();
  ~B0 ();
  virtual void display() = 0;  // 纯虚函数
private:

};

B0 ::B0 ()
{
}

B0 ::~B0 ()
{
}

class B1 :public B0
{
public:
  void display() { cout << "B1::display()" << endl; }


};

class D1 :public B1
{
public:
  void display() { cout << "D1::display()" << endl; }
};

void fun(B0* ptr)
{
  ptr->display();
}

