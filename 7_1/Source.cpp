#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
  Rectangle rect;
  rect.initR(2, 3, 20, 10);   // 使用自己的构造方法。
  rect.move(3, 2);            // 直接使用基类的公有方法。
  cout << "The data of rect(X,Y,W,H): " << endl;
  cout << rect.getX() << ","  // 使用基类的get方法
    << rect.getY() << ","     // 使用基类的get方法
    << rect.getH() << ","     // 使用自己的get方法
    << rect.getW() << endl;

}