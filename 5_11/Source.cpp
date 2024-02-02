#include <iostream>
#include "Header.h"

// 定义一个文件有效的全局变量n
int n;

int main()
{               
  // 对n进行赋值。
  n = 20;
  std::cout << "n 的值为：" << n << std::endl;

  // 使用外部文件和方法对n赋值。 外部文件需要extern int n; 语句！
  fn1();
  std::cout << "n 的值为：" << n << std::endl;

  // 再对n进行赋值。
  n = 66;
  std::cout << "n 的值为：" << n << std::endl;

}