#pragma once
// �������
// ������Ա�ķ��ʡ�
class A
{
protected:
  int x;
};

// ����B�࣬���м̳�A
class B :public A
{
public:
  void function();
};

// B��Ĺ��з�������ֱ��ʹ��A��ı�����Ա��
void B::function()
{
  x = 5;
}