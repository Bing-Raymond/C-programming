// ����ٷ����ҳ�1 - 100֮���������
// ���flag�õĺã���Ϊʲô���ã���Ϊ�����뷨��
#include <iostream>
int main()
{
  int i, j, k, flag;
  for (i = 1; i < 101; i++)
  {
    flag = 1;
    k = sqrt(i);
    for (j = 2; j <= k; j++)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      std::cout << i << " ��������" << std::endl;
    }

  }


}