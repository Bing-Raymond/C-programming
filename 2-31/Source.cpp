// 用穷举法，找出1 - 100之间的质数。
// 这个flag用的好！我为什么会用？因为我有想法。
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
      std::cout << i << " 是质数。" << std::endl;
    }

  }


}