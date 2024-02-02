#include <iostream>
#include "Header.h"
int main()
{
  std::cout << "Step One: " << std::endl;
  Point* Ptr1 = new Point;  // 动态创建对象，没有给出初值，因此调用默认构造函数
  delete Ptr1;              // 删除对象，自动调用析构函数。
  std::cout << "Step two: " << std::endl;
  Ptr1 = new Point(1, 2);   // 动态创建对象，并给出初值，因此调用有形参的构造函数。
  delete Ptr1;              // 删除对象，自动调用析构函数。

  // 创建数组类型对象。动态为数组分配内存。
  Point* Ptr2 = new Point[2];
  Ptr2[0].move(3,4);
  Ptr2[1].move(5, 6);
  std::cout << "Deleting..." << std::endl;
  delete[] Ptr2;  // 删除整个对象数组。没见过！
}