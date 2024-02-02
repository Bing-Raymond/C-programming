#include "Header.h"
int main()
{
  Car myCar(100.0);
  Boat myBoat(1011.1);
  cout << "total weight: " << totalWeight(myCar, myBoat) << endl;
}