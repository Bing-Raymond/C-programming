// 使用系统函数pow(x,y) 计算x的y次方的值。注意包含头文件cmath
#include <iostream>
#include <cmath>
int main()
{
  int x = 2;
  int y = 3;
  std::cout << "x 的 y 次方结果为：" << pow(x, y) << std::endl;
}