// ���������������һ����������������麯������ô�����������������������������Ҳ���麯����
// ʹ��ָ������ʱ�����Զ�̬�󶨣�ʵ������ʱ�Ķ�̥����֤ʹ�û������͵�ָ����ܹ������ʵ�������������Բ�ͬ�Ķ��������������
// �ȿ�û��ʹ���麯�����ࡣ
// �����н���������ڶ�̬��̬��ԭ��������ʱ��û����ȷ���������Ķ���
// ���������⣬��Ҫ������������޸�Ϊ�麯����
#pragma once
#include <iostream>
using namespace std;
class Base
{
public:
  //~Base()
  //{
  //  cout << " Base destructor\n";
  //}
  virtual ~Base()
  {
    cout << "Base destructor\n";
  }

};

class Derived :public Base
{
public:
  Derived();
  ~Derived();
private:
  int *i_pointer;
};

Derived::Derived()
{
  i_pointer = new int(0);
}
Derived::~Derived()
{
  cout << "Derived destructor\n";
  delete i_pointer;
}

void fun(Base* b)
{
  delete b;
}
