#include <iostream>
using namespace std;
void move(int matrix[3][3])
{
  int i, j, k;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < i; j++)
    {
      // 需要一个临时的k来存放需要挪动的值。
      k = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = k;
    }
  }
}

int main()
{
  int i, j;
  int data[3][3];
  cout << "请输入矩阵元素：" << endl;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << "第 " << i + 1 << " 行第 " << j + 1 << " 个元素为：";
      cin >> data[i][j];
    }
  }
  cout << "输入的矩阵的为：" << endl;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      cout << data[i][j] << " ";
    cout << endl;
  }

  move(data);
  cout << "转置后的矩阵为：" << endl;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      cout << data[i][j] << " ";
    cout << endl;
  }
}