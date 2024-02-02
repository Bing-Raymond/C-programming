#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
  SimpleCircle circleOne, circleTwo(9);
  cout << "circleOne: " << circleOne.getRadius() << endl;
  cout << "circleTwo: " << circleTwo.getRadius() << endl;
  int rad;
  cout << "Please enter radius: " << endl;
  cin >> rad;
  circleOne.setRadius(rad);
  cout << "circleOne: " << circleOne.getRadius() << endl;
  return 0;
}

SimpleCircle::SimpleCircle()
{
  // 
  itsRadius = new int(5);
}

SimpleCircle::SimpleCircle(int rad)
{
  itsRadius = new int(rad);
}

SimpleCircle::SimpleCircle(const SimpleCircle& rhs)
{
  int val = rhs.getRadius();
  itsRadius = new int(val);
}

int SimpleCircle::getRadius() const
{
  return *itsRadius;
}

void SimpleCircle::setRadius(int rad)
{
  *itsRadius = rad;
}