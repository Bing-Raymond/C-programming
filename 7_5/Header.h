// �����๹�캯����������̳С�������Ƕ����)
// ��צCʱ��Ҫ�ȵ��û���Ĺ��캯������ô����������Cʱ��˳��B2��B1��B3 27�С�
// Ȼ������Ƕ����Ĺ��캯������˳��Ӧ���ǰ��ճ�Ա������������˳��B1��B2��B3��36�е�38�С�
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

class C :public B2, public B1, public B3      // ������C
// ע���������˳�򣿣���
{

public:
  C(int a, int b, int c, int d) :B1(a) , memberB2(d), memberB1(c), B2(b) {}
  // ע��������ø�����˳��
  // ע���Ա�������ĸ�����˳��
private:                                      // �������˽�ж����Ա
  B1 memberB1;
  B2 memberB2;
  B3 memberB3;
};