#include <iostream>
#include "Header.h"
int main()
{
  std::cout << "Step One: " << std::endl;
  Point* Ptr1 = new Point;  // ��̬��������û�и�����ֵ����˵���Ĭ�Ϲ��캯��
  delete Ptr1;              // ɾ�������Զ���������������
  std::cout << "Step two: " << std::endl;
  Ptr1 = new Point(1, 2);   // ��̬�������󣬲�������ֵ����˵������βεĹ��캯����
  delete Ptr1;              // ɾ�������Զ���������������

  // �����������Ͷ��󡣶�̬Ϊ��������ڴ档
  Point* Ptr2 = new Point[2];
  Ptr2[0].move(3,4);
  Ptr2[1].move(5, 6);
  std::cout << "Deleting..." << std::endl;
  delete[] Ptr2;  // ɾ�������������顣û������
}