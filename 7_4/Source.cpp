#include "Header.h"

void fun(B0*ptr)  // ����Ϊָ���������ָ�롣
{
  ptr->display();
}

int main()
{
  B0 b0;          // �������
  B1 b1;          // ������ B1�Ķ���
  D1 d1;          // ������ d1�Ķ���
  B0* p;          // һ�������ָ��
  p = &b0;        // ָ��������
  fun(p);         // ����fun���������B0��display
  p = &b1;        // ָ��������B1�Ķ���
  fun(p);         // ����fun�����������B0��display
  p = &d1;        // ָ��������d1�Ķ���
  fun(p);         // ����fun�����������B0��display
}