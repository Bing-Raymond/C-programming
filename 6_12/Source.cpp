// 对象指针

#include "Header.h"
using namespace std;
// 静态成员需要这样。定义性说明。
int Point::countP = 0;
int main()
{
  // 创建一个对象。
  Point A(4, 5);
  // 创建一个Point类型的指针。
  Point *p1;
  // 将A对象的地址给指针赋值。让指针指向A对象。
  // 这个指针不用删除吗？

  p1 = &A;
  cout << "X 的坐标： " << p1->getX() << endl;
  cout << "Y 的坐标： " << p1->getY() << endl;
  // ==============================================
  // 调用Point 类里的公有函数的方式。
  // 创建一个指向Point类，getX函数的指针。返回值为 int。
  int (Point::*p_getX)() = &Point::getX;
  cout << (A.*p_getX)() << endl;
  // 一般的。对象. 出来。
  cout << A.getX() << endl;
  // 一般的。对象指针->指出来。
  cout << (p1->getX());

  // ==============================================
  // 声明一个int型指针，指向类的静态成员。
  int* count = &Point::countP;
  cout << "Object id = " << *count << endl;

  // ==============================================

  // 通过指针访问类的静态函数成员。
  void(*gc)() = Point::getC;
  cout << "Point A, " << A.getX() << "," << A.getY();
  gc();
  Point B(A);                                // 对象声明 B
  cout << "Point B, " << B.getX() << "," << B.getY();
  gc();

}

// copy 构造函数，需要实现！
Point::Point(Point& p)
{
  X = p.X;
  Y = p.Y;
  countP++;
}