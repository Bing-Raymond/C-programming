// �õݹ�ķ�����д������n�����õ¶���ʽ��ֵ������������ʵ�����롢������ݹ鹫ʽ��
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
  std::cout << "������������ n:";
  std::cin >> n;
  std::cout << "������������ x: ";
  std::cin >> x;

  std::cout << "���̵Ľ�Ϊ��" << p(n, x) << std::endl;

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