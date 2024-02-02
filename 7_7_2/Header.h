// 声明一个基类及其派生类，在构造函数中输出提示信息，构造派生类的对象，观察构造函数的执行情况。
#pragma once
#include <iostream>
using namespace std;
class BaseClass
{
public:
  BaseClass() { cout << "基类的构造对象！" << endl; };
  ~BaseClass() { cout << "基类的析构对象！" << endl; };

};

class DerivedClass :public BaseClass
{
public:
  DerivedClass() { cout << "构造派生类对象！" << endl; }
};
