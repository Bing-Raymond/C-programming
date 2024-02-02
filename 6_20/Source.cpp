#include "Header.h"
int main()
{
  int number;
  std::cout << "Please enter the number of points." << std::endl;
  std::cin >> number;
  ArrayOfPoints pointsArray1(number);
  pointsArray1.Element(0).move(5, 10);
  pointsArray1.Element(1).move(15, 20);
  // ���û��ʵ�������ĸ��ƹ��캯����ִ������Ļ���Ǳ���ƣ�ֻ���Ƶĵ�ַ��
  // ������pointsArray1��pointsArray2��������һ���ģ����ң�������1��2���յ�Ӱ�죡
  // ʵ���˸��ƹ��캯�����ͻ�����ơ�
  // ���ƶ� pointsArray1�ĵ㣬�Ͳ���Ӱ��pointsArray2�ˡ�
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

// ʵ��ArrayOfPoints �ĸ��ƹ��캯����
ArrayOfPoints::ArrayOfPoints(ArrayOfPoints& pointsArray)
{
  numberOfPoints = pointsArray.numberOfPoints;
  points = new Point[numberOfPoints];
  for (int i = 0; i < numberOfPoints; i++)
  {
    points[i].move(pointsArray.Element(i).getX(), pointsArray.Element(i).getY());
  }


}