#include <iostream>
#include "Header.h"

// ����һ���ļ���Ч��ȫ�ֱ���n
int n;

int main()
{               
  // ��n���и�ֵ��
  n = 20;
  std::cout << "n ��ֵΪ��" << n << std::endl;

  // ʹ���ⲿ�ļ��ͷ�����n��ֵ�� �ⲿ�ļ���Ҫextern int n; ��䣡
  fn1();
  std::cout << "n ��ֵΪ��" << n << std::endl;

  // �ٶ�n���и�ֵ��
  n = 66;
  std::cout << "n ��ֵΪ��" << n << std::endl;

}