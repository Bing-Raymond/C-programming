// ��д�ݹ麯��GetPower(int x, int y) ����x��y���ݣ�����������ʵ�����������
#include <iostream>
long GetPower(int x, int y);
int main()
{
  int x = 0;
  std::cout << "������һ������: ";
  std::cin >> x;
  int y = 0;
  std::cout << "�������: ";
  std::cin >> y;
  std::cout << x << " �� " << y << "����Ϊ��" << GetPower(x, y) << std::endl;
  return 0;
}

long GetPower(int x, int y)
{
  if (y == 0)
    return 1;
  else
    return x * GetPower(x, y - 1);
}