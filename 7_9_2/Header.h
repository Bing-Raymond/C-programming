// ����һ������Base�����������г�Ա����fn1������fn2������˽��������Derived�࣬���ͨ��Derived��Ķ�����û���ĺ���fn1������
#pragma once

#include <iostream>
using namespace std;
class Base
{
public:
  int fn1() const { return 1; }
  int fn2() const { return 2; }


};

// �����ﶨ����ͬ���ֵķ�����Ȼ��ʵ�ֵ�ʱ�򣬷��ظ���ķ�������!

class Derived :private Base
{
public:
  int fn1() { return Base::fn1(); }
  int fn2() { return Base::fn2(); }
};