// ��Χ2~N �е�������N�ڳ������е�ʱ���ɼ������롣
// ʹ����vector��resize�Ĺ��ܡ�

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
  A[primecount++] = 2;   // 2 ��һ��������
  for (i = 3; i < n; i++)
  {
    if (primecount == A.size())
      A.resize(primecount + 10);  // ����Ѿ�������������λ�ã���ô��resize����ǰsize + 10 ��
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