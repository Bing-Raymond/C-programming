#include "Header.h"
int main()
{
  D1 d1;
  d1.nV = 1;
  d1.fun();

  // ������ô������ ѧϰ�ˣ�
  d1.B1::nV = 2;
  d1.B1::fun();

  d1.B2::nV = 3;
  d1.B2::fun();

  // ʹ��D2
  D2 d2;
  // d2.nV = 4;  // ������ΪD2��û�ж���nV�����һ���B1��B2����nV��
  // d2.fun();   // ͬ��
  d2.B1::nV = 4;
  d2.B1::fun();

  d2.B2::nV = 6;
  d2.B2::fun();
}

/*
Member of D1 // ������û�����أ�ֻҪͬ���������fun���ᱻ���ء�
Member of B1 // ֻ��d1.B1����fun ����call������B1��fun
Member of B2                            

��������

*/