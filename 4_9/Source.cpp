#include <iostream>
#include "Header.h"

using namespace std;

float Rectangle::getArea() const
{
  return (pRight.px - pLift.px)*(pRight.py - pLift.px);
}

int main()
{
  Point pL(0, 0);
  Point pR(2, 8);

  Rectangle myRectangle(pL, pR);
  
  cout << "area: " << myRectangle.getArea();

}