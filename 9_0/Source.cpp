// 9-1.cpp renamed to 9-0
#include <iostream>
using namespace std;
template < class T>                                  // ��������ģ��
void ouputArray(const T* P_array, const int count)   // ���庯����
{
  for (int i = 0; i < count; i++)
  {
    cout << P_array[i] << " ";
  }
  cout << endl;
}

int main()                                          // ������
{
  const int aCount = 8, bCount = 8, cCount = 20;
  int aArray[aCount] = { 1,2,3,4,5,6,7,8 };         // int ����
  double bArray[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };   // double ����
  char cArray[cCount] = "Welcome to see you!";                   // char ����

  cout << "aArraycontains:" << endl;
  ouputArray(aArray, aCount);
  cout << "b Arraycontains:" << endl;
  ouputArray(bArray, bCount);
  cout << "c Arraycontains:" << endl;
  ouputArray(cArray, cCount);
}