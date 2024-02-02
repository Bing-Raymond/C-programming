#pragma once

// 派生类成员的标识与访问。
// 同名隐藏规则。如果存在两个或多个具有包含关系的作用域，外层声明了一个标识符，内层没有再次声明同名标识符，那么外层标识符在内层仍然可见；
// 如果在内层声明了同名标识符，则外层标识符，在内层不可见。这时，称内层变量隐藏了外层同名变量。
// 行为会被同名隐藏；属性不会，属性会有多个copy，浪费资源，所以，可以用虚基！
// 在没有虚函数的情况下，如果派生类中声明了与基类成员函数同名的新函数，即使函数的参数表不同，从基类继承的所有重载形式也都会被隐藏。

#include <iostream>
using namespace std;
class B1
{
public:
  int nV;  //
  void fun() { cout << "Member of B1" << endl; }
};

class B2
{
public:
  int nV;
  void fun() { cout << "Member of B2" << endl; }
};

class D1 :public B1, public B2
{
public:
  int nV;
  void fun() { cout << "Member of D1" << endl; }

};

class D2 :public B1, public B2
{

};
