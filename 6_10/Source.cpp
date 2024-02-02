// 读入三个浮点数，将整数部分和小数部分分别输出。
// 为什么这个方法，函数的参数写的是*，传参数的时候写的是&呢？
#include<iostream>
using namespace std;
void splitfloat(float x, int *intpart, float *fracpart)
{
  // *intpart 表示，操作的是intpart地址上的数。
  *intpart = int(x);
  *fracpart = x - int(x);
}

// 这样用也一样的！而且更好理解。
void splitfloat2(float x, int& intpart, float& fracpart)
{
  intpart = int(x);
  fracpart = x - intpart;
}

int main()
{
  int i, n;
  float x, f;
  cout << "Enter 3 float point numbers: " << endl;
  cout << "splitfloat: " << endl;
  for (i = 0; i < 3; i++)
  {
    cin >> x;
    splitfloat(x,&n,&f); // 表示传进去的是地址。而不是引用。
    cout << "整数部分： " << n << " 小数部分：" << f << endl;
  }
  cout << "Enter 3 float point numbers: " << endl;
  cout << "splitfloat2: " << endl;
  for (i = 0; i < 3; i++)
  {
    cin >> x;
    splitfloat2(x, n, f);
    cout << "整数部分： " << n << " 小数部分：" << f << endl;
  }
}