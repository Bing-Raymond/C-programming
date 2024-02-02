// 编写递归函数GetPower(int x, int y) 计算x的y次幂，在主程序中实现输入输出。
#include <iostream>
long GetPower(int x, int y);
int main()
{
  int x = 0;
  std::cout << "请输入一个整数: ";
  std::cin >> x;
  int y = 0;
  std::cout << "请输入次: ";
  std::cin >> y;
  std::cout << x << " 的 " << y << "次幂为：" << GetPower(x, y) << std::endl;
  return 0;
}

long GetPower(int x, int y)
{
  if (y == 0)
    return 1;
  else
    return x * GetPower(x, y - 1);
}