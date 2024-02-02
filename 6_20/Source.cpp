#include "Header.h"
int main()
{
  int number;
  std::cout << "Please enter the number of points." << std::endl;
  std::cin >> number;
  ArrayOfPoints pointsArray1(number);
  pointsArray1.Element(0).move(5, 10);
  pointsArray1.Element(1).move(15, 20);
  // 如果没有实现这个类的复制构造函数，执行下面的会是潜复制，只复制的地址。
  // 这样，pointsArray1和pointsArray2的内容是一样的，并且，析构了1，2会收到影响！
  // 实现了复制构造函数，就会是深复制。
  // 再移动 pointsArray1的点，就不会影响pointsArray2了。
  ArrayOfPoints pointsArray2(pointsArray1);
  cout << "Copy of pointsArray1:" << endl;
  cout << "Point_0 of array2: "
    << pointsArray2.Element(0).getX() << ", " << pointsArray2.Element(0).getY() << endl;
  cout << "Point_1 of array2: "
    << pointsArray2.Element(1).getX() << ", " << pointsArray2.Element(1).getY() << endl;
  pointsArray1.Element(0).move(25, 30);
  pointsArray1.Element(1).move(35, 40);
  cout << "After the moving of pointsArray1: " << endl;
  cout << "Point_0 of array2: "
    << pointsArray2.Element(0).getX() << ", " << pointsArray2.Element(0).getY() << endl;
  cout << "Point_1 of array2: "
    << pointsArray2.Element(1).getX() << ", " << pointsArray2.Element(1).getY() << endl;
}

// 实现ArrayOfPoints 的复制构造函数。
ArrayOfPoints::ArrayOfPoints(ArrayOfPoints& pointsArray)
{
  numberOfPoints = pointsArray.numberOfPoints;
  points = new Point[numberOfPoints];
  for (int i = 0; i < numberOfPoints; i++)
  {
    points[i].move(pointsArray.Element(i).getX(), pointsArray.Element(i).getY());
  }


}