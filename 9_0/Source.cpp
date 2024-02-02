// 9-1.cpp renamed to 9-0
#include <iostream>
using namespace std;
template < class T>                                  // 声明函数模板
void ouputArray(const T* P_array, const int count)   // 定义函数体
{
  for (int i = 0; i < count; i++)
  {
    cout << P_array[i] << " ";
  }
  cout << endl;
}

int main()                                          // 主函数
{
  const int aCount = 8, bCount = 8, cCount = 20;
  int aArray[aCount] = { 1,2,3,4,5,6,7,8 };         // int 数组
  double bArray[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };   // double 数组
  char cArray[cCount] = "Welcome to see you!";                   // char 数组

  cout << "aArraycontains:" << endl;
  ouputArray(aArray, aCount);
  cout << "b Arraycontains:" << endl;
  ouputArray(bArray, bCount);
  cout << "c Arraycontains:" << endl;
  ouputArray(cArray, cCount);
}