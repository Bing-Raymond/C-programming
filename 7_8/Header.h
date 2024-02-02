// 虚基类。可以使用对象名.成员名的方式访问这些成员。
// 不是虚基需要使用同名隐藏。是虚基，就是大家公有，不用隐藏了。
#pragma once
#include <iostream>
using namespace std;
class B0
{
public:
  int nV;
  void fun() { cout << "Member of B0" << endl; }
};

class B1 :virtual public B0
{
public:
  int nV1;
};
class B2 :virtual public B0
{
public:
  int nV2;
};

class D1 :public B1, public B2
{
public:
  int nVd;
  void fund() { cout << "Member of D1" << endl; }
};

class D2 :public B0, public B2
{
public:
  int nVd;
  void fund() { cout << "Member of D1" << endl; }
};