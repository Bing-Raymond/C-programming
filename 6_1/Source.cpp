#include <iostream>
using namespace std;
int main()
{
  int a[10], b[10];
  int i;
  for (i = 0; i < 10; i++)
  {
    a[i] = i * 2 - 1;
    b[10 - i - 1] = a[i];
  }
  for (i = 0; i < 10; i++)
  {
    cout << "A[" << i << "], " << a[i];
    cout << " B[" << i << "]," << b[i] << endl;
  }
}