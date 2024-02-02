#include "Header.h"
int main()
{
  int myInt = 6500;
  long myLong = 65000;
  float myFloat = 6.5F;
  double myDouble = 6.5e20;

  int doubleInt;
  long doubleLong;
  float doubleFloat;
  double doubleDouble;

  doubleInt = Double(myInt);
  doubleLong = Double(myLong);
  doubleFloat = Double(myFloat);
  doubleDouble = Double(myDouble);


  cout << "Double(myInt) " << Double(myInt) << endl;
  cout << "Double(myLong) " << Double(myLong) << endl;
  cout << "Double(myFloat) " << Double(myFloat) << endl;
  cout << "Double(myDouble) " << Double(myDouble) << endl;
  return 0;
}