// 派生类构造函数举例（多继承、含有内嵌对象)
// 钩爪C时，要先调用基类的构造函数，那么就是声明类C时的顺序，B2，B1，B3 27行。
// 然后是内嵌对象的构造函数调用顺序应该是按照成员在类中声明的顺序，B1，B2，B3。36行到38行。
#pragma once
#include <iostream>
using namespace std;
class B1
{
public:
  B1(int i) { cout << "constructing B1 " << i << endl; }
};

class B2
{
public:
  B2(int j) { cout << "constructing B2 " << j << endl; }


};

class B3
{
public:
  B3() { cout << "constructing B3 * " << endl; }
};

class C :public B2, public B1, public B3      // 派生类C
// 注意积类名的顺序？？？
{

public:
  C(int a, int b, int c, int d) :B1(a) , memberB2(d), memberB1(c), B2(b) {}
  // 注意基类名得个数与顺序
  // 注意成员对象名的个数与顺序
private:                                      // 派生类的私有对象成员
  B1 memberB1;
  B2 memberB2;
  B3 memberB3;
};