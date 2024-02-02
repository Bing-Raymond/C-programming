#include "Header.h"
int main()
{
  int number;
  std::cout << "Please enter the number of points." << std::endl;
  std::cin >> number;
  ArrayOfPoints points(number);
  points.Element(0).move(4, 5);
  points.Element(1).move(10, 20);
}
