#include "Header.h"
int main()
{
  B0 b0, *pB;   // ����ָ�룬ָ���������������麯�����ͻ��������ķ����������ǻ���ķ�����
  B1 b1;
  D1 d1;
  pB = &b0;
  fun(pB);
  pB = &b1;
  fun(pB);
  pB = &d1;
  fun(pB);

}

/*
B0::display
B1::display()
D1::display()
*/