// 编写递归函数 int fib(int n), 在主程序中输入n的值，调用fib函数计算Fibonacci级数。公式为：fib（n）= fib(n-1) + fib(n-2), n>2; fib(1) = fib(2) = 1 
#include <iostream>
int fib(int n);
int main()
{
  int input = 0;
  std::cout << "请输入一个整数：";
  std::cin >> input;
  std::cout << "fib 为： " << fib(input);
}

int fib(int n)
{
  if (n < 3)
  {
    return 1;
  }
  else
  {
    return fib(n - 1) + fib(n - 2);
  }
}