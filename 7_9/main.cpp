#include "Header.h"
int main()
{
  double a[] =                     // ������ϵ������
  {
   0.2368,0.2471,0.2568,1.2671,    // ��һ��
   0.1968,0.2071,1.2168,0.2271,    // �ڶ���
   0.1581,1.1675,0.1768,0.1871,    // ������
   1.1161,0.1254,0.1397,0.1490     // ������
  };

  double b[4] =                    // �����Ҷ���
  { 1.8471,1.7471,1.6471,1.5471 };

  Linequ equl(4);                  // ����һ����Ԫ���������
  equl.setLinequ(a, b);            // ���÷�����

  equl.printL();                   // ���������
  if (equl.Solve())                // ��ⷽ����
  {
    equl.showX();                  // ���������Ľ�
  }
  else
    cout << "Fail" << endl;
}