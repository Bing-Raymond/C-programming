// ����ࡣ����ʹ�ö�����.��Ա���ķ�ʽ������Щ��Ա��
// ���������Ҫʹ��ͬ�����ء�����������Ǵ�ҹ��У����������ˡ�
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