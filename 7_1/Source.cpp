#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
  Rectangle rect;
  rect.initR(2, 3, 20, 10);   // ʹ���Լ��Ĺ��췽����
  rect.move(3, 2);            // ֱ��ʹ�û���Ĺ��з�����
  cout << "The data of rect(X,Y,W,H): " << endl;
  cout << rect.getX() << ","  // ʹ�û����get����
    << rect.getY() << ","     // ʹ�û����get����
    << rect.getH() << ","     // ʹ���Լ���get����
    << rect.getW() << endl;

}