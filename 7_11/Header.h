// ����һ������BaseClass��������������DerivedClass,BaseClass�ɳ�Ա����fn1������fn2(),DerivedClass Ҳ�г�Ա����fn1������fn2������
// ��������������һ��DeerivedClass�Ķ��󣬷ֱ���DerivedClass�Ķ����Լ�BaseClass��DerivedClass��ָ��������fn1������fn2�������۲����н��
#pragma once
#include <iostream>
using namespace std;
class BaseClass
{
public:
  int fn1() { cout << "���û����fn1 " << endl; return 1; }
  int fn2() { cout << "���û����fn2 " << endl; return 2; }

  virtual void fn3() { cout << "���û����fn3 " << endl; }
};

class DerivedClass :public BaseClass
{
public:
  int fn1() { cout << "�����������fn1 " << endl; return 3; }
  int fn2() { cout << "�����������fn2 " << endl; return 4; }
};

class BoyClass : virtual public BaseClass
{
public:
  int fn1() { cout << "����������BoyClass ��fn1 " << endl; return 5; }
  void fn3() { cout << "����������BoyClass ��fn3 " << endl; }
};

