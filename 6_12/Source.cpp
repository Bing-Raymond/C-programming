// ����ָ��

#include "Header.h"
using namespace std;
// ��̬��Ա��Ҫ������������˵����
int Point::countP = 0;
int main()
{
  // ����һ������
  Point A(4, 5);
  // ����һ��Point���͵�ָ�롣
  Point *p1;
  // ��A����ĵ�ַ��ָ�븳ֵ����ָ��ָ��A����
  // ���ָ�벻��ɾ����

  p1 = &A;
  cout << "X �����꣺ " << p1->getX() << endl;
  cout << "Y �����꣺ " << p1->getY() << endl;
  // ==============================================
  // ����Point ����Ĺ��к����ķ�ʽ��
  // ����һ��ָ��Point�࣬getX������ָ�롣����ֵΪ int��
  int (Point::*p_getX)() = &Point::getX;
  cout << (A.*p_getX)() << endl;
  // һ��ġ�����. ������
  cout << A.getX() << endl;
  // һ��ġ�����ָ��->ָ������
  cout << (p1->getX());

  // ==============================================
  // ����һ��int��ָ�룬ָ����ľ�̬��Ա��
  int* count = &Point::countP;
  cout << "Object id = " << *count << endl;

  // ==============================================

  // ͨ��ָ�������ľ�̬������Ա��
  void(*gc)() = Point::getC;
  cout << "Point A, " << A.getX() << "," << A.getY();
  gc();
  Point B(A);                                // �������� B
  cout << "Point B, " << B.getX() << "," << B.getY();
  gc();

}

// copy ���캯������Ҫʵ�֣�
Point::Point(Point& p)
{
  X = p.X;
  Y = p.Y;
  countP++;
}