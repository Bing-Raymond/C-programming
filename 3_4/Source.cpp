// ��д�ݹ麯�� int fib(int n), ��������������n��ֵ������fib��������Fibonacci��������ʽΪ��fib��n��= fib(n-1) + fib(n-2), n>2; fib(1) = fib(2) = 1 
#include <iostream>
int fib(int n);
int main()
{
  int input = 0;
  std::cout << "������һ��������";
  std::cin >> input;
  std::cout << "fib Ϊ�� " << fib(input);
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