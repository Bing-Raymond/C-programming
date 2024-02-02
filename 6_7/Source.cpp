// 使用三种方法输出各数组元素。
// 学些：
// 最常用且普通的：aa[i][j] 
// 不大常用的一维数组：*a + i; // 这是什么意思？就是地址是 + 1， + 1 这种吗？和类型没有关系吗？
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

  // 这个用法没试过。注意观察。
  for (p = a; p < (a+10); p++)
  {
    cout << *p << " ";
    cout << endl;
  }

  int array2[2][3] = { {11,12,13},{21,22,23} };
  //       a[i][j]
  for (int i = 0; i < 2; i++)
  {
    cout << *(array2 + i) << endl;  // 打印出来的是地址。
    for (int j = 0; j < 3; j++)
    {
      cout << *(*(array2 + i) + j) << " ";  // 打印出来的是地址上的
    }
    cout << endl;
  }
}