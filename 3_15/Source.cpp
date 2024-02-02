// 用递归的方法编写函数求n阶勒让德多项式的值，在主程序中实现输入、输出；递归公式。
/*
       1                                      (n = 0)
     
p(x) = x                                      (n = 1)

       ((2n-1)xpn-1(x) - (n -1)pn-2(x))/n     (n > 1)
*/
#include <iostream>
float p(int n, int x);
int main()
{
  int n, x;
  std::cout << "请输入正整数 n:";
  std::cin >> n;
  std::cout << "请输入正整数 x: ";
  std::cin >> x;

  std::cout << "方程的解为：" << p(n, x) << std::endl;

}

float p(int n, int x)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return x;
  else
    return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}