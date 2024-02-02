// 求范围2~N 中的质数，N在程序运行的时候，由键盘输入。
// 使用了vector的resize的功能。

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
  vector<int> A(10);
  int n;
  int primecount = 0, i, j;
  cout << "Enter a value >= 2 as upper limit for prime numbers: ";
  cin >> n;
  A[primecount++] = 2;   // 2 是一个质数。
  for (i = 3; i < n; i++)
  {
    if (primecount == A.size())
      A.resize(primecount + 10);  // 如果已经到了向量最大的位置，那么就resize到当前size + 10 。
    if (i % 2 == 0)
      continue;
    j = 3;
    while (j <= i / 2 && i % j != 0)
      j += 2;
    if (j > i / 2)
      A[primecount++] = i;
  }

  for (i = 0; i < primecount; i++)
  {
    cout << setw(5) << A[i];
    if ((i + 1) % 10 == 0)
      cout << endl;
  }
  cout << endl;
}