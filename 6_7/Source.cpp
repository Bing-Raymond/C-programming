// ʹ�����ַ������������Ԫ�ء�
// ѧЩ��
// �������ͨ�ģ�aa[i][j] 
// �����õ�һά���飺*a + i; // ����ʲô��˼�����ǵ�ַ�� + 1�� + 1 �����𣿺�����û�й�ϵ��
#include <iostream>
using namespace std;
int main()
{
  int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
  int i = 0;
  int* p = 0;
  for (i = 0; i < 10; i++)
  {
    cout << a[i] << " ";
    cout << endl;
  }

  for (i = 0; i < 10; i++)
  {
    cout << *(a + i) << " ";
    cout << endl;
  }

  // ����÷�û�Թ���ע��۲졣
  for (p = a; p < (a+10); p++)
  {
    cout << *p << " ";
    cout << endl;
  }

  int array2[2][3] = { {11,12,13},{21,22,23} };
  //       a[i][j]
  for (int i = 0; i < 2; i++)
  {
    cout << *(array2 + i) << endl;  // ��ӡ�������ǵ�ַ��
    for (int j = 0; j < 3; j++)
    {
      cout << *(*(array2 + i) + j) << " ";  // ��ӡ�������ǵ�ַ�ϵ�
    }
    cout << endl;
  }
}