#pragma once

// �������Ա�ı�ʶ����ʡ�
// ͬ�����ع���������������������а�����ϵ�����������������һ����ʶ�����ڲ�û���ٴ�����ͬ����ʶ������ô����ʶ�����ڲ���Ȼ�ɼ���
// ������ڲ�������ͬ����ʶ����������ʶ�������ڲ㲻�ɼ�����ʱ�����ڲ�������������ͬ��������
// ��Ϊ�ᱻͬ�����أ����Բ��ᣬ���Ի��ж��copy���˷���Դ�����ԣ������������
// ��û���麯��������£������������������������Ա����ͬ�����º�������ʹ�����Ĳ�����ͬ���ӻ���̳е�����������ʽҲ���ᱻ���ء�

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
