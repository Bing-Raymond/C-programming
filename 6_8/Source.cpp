#include <iostream>
using namespace std;
int main()
{
  int line1[] = { 1,0,0 };
  int line2[] = { 0,1,0 };
  int line3[] = { 0,0,1 };
  int *p_line[3];
  p_line[0] = line1;  // ÕâÖÖ£¿
  p_line[1] = line2;
  p_line[2] = line3;

  cout << "Matrix test: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j< 3; j++)
    {
      cout << p_line[i][j] << " ";
    }
    cout << endl;
  }
}