#pragma once

// 在函数fn1（）中声明一个静态变量n，fn1（）中对n的值加1，在主函数中，调用fn1（）十次，显示n的值。
// 学习static吗？不明白。
void fn1()
{
  static int n = 10;
  n = n + 1;
  std::cout << "n 的值为： " << n << std::endl;
}