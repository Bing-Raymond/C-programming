#pragma once

// ѧϰ��ļ�����
// ���ͼ����Թ�����ָ������Ҫ���������κεط���������ʹ�ù���������Ķ����������

// ������Ķ�����Ը��Ƹ��������
// ������Ķ�����Գ�ʼ����������á�
// ���������ĵ�ַ���Ը�ֵ�������ָ�룿
// ����ֻ��ʹ�ôӻ���̳й����Ĺ��еķ����ˡ��������Լ���ͬ���������ᱻ���ã�f
// ţ�ư���������
// �����֮����������� �Ϳ�����Ϊ ����Ķ��� ʹ�ã���ֻ��ʹ�ôӻ���̳еĳ�Ա��
#include <iostream>
using namespace std;
class B0
{
public:
  B0();
  ~B0();
  void display() const { cout << "B0::display()" << endl; }

private:

};

B0::B0()
{
}

B0::~B0()
{
} 

class B1 : public B0
{
public:
  void display() const { cout << "B1::display()" << endl; }
};

class D1 :public B1
{
public:
  void display() const { cout << "D1::display()" << endl; }
};

