// 指针的声明、赋值与使用
#include <iostream>
using namespace std;
int main()
{
  int* i_pointer;
  int i;
  i_pointer = &i;
  i = 100;
  cout << "Output int i = " << i << endl;
  cout << "Output int pointer i = " << *i_pointer << endl;
}