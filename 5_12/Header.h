#pragma once

// �ں���fn1����������һ����̬����n��fn1�����ж�n��ֵ��1�����������У�����fn1����ʮ�Σ���ʾn��ֵ��
// ѧϰstatic�𣿲����ס�
void fn1()
{
  static int n = 10;
  n = n + 1;
  std::cout << "n ��ֵΪ�� " << n << std::endl;
}