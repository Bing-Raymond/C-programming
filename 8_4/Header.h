// Ðéº¯Êý
#pragma once
#include <iostream>
using namespace std;
class B0
{
public:
  virtual void display() const { cout << "B0::display" << endl; }
};

class B1 :public B0
{
public:
  void display() const { cout << "B1::display()" << endl; }
};

class D1:public B1
{
  void display() const { cout << "D1::display()" << endl; }
};

void fun(B0 *pB)
{
  pB->display();
}



