#pragma once
// ��̬��������
// Ǳ���ơ�
// ��ơ�
// ѧϰ��
// ���û��ʵ�������ĸ��ƹ��캯����ִ������Ļ���Ǳ���ƣ�ֻ���Ƶĵ�ַ��
// ������pointsArray1��pointsArray2��������һ���ģ����ң�������1��2���յ�Ӱ�죡
// ʵ���˸��ƹ��캯�����ͻ�����ơ�
// ���ƶ� pointsArray1�ĵ㣬�Ͳ���Ӱ��pointsArray2�ˡ�
#include <iostream>
using namespace std;
class Point
{
private:
  int X;
  int Y;
public:
  Point()
  {
    X = Y = 0;
    std::cout << "Default Constructor called." << std::endl;
  }
  Point(int xx, int yy)  // ��������д����Ϊ��ȱʡ��ֵ����Щֵ�ǿ���û�еġ����û�У�xx��yy����ô��������൱�ڣ�Point() ���Ժ��潨�����ʱ��ᱨ��
  {
    X = xx;
    Y = yy;
    std::cout << "Constructor called." << std::endl;
  }  // �������Ĺ��캯����
  Point(Point& p);    // copy ���캯������Ҫʵ�֣�

  ~Point() { std::cout << "Destructor called." << std::endl; }
  int getX() { return X; }
  int getY() { return Y; }
  static void getC() { std::cout << " Object id = " << std::endl; }
  void move(int x, int y)
  {
    X = x;
    Y = y;
    std::cout << "Move to: " << x << ", " << y << std::endl;
  }
public:
  // ����һ��ָ���ྲ̬���ݳ�Ա��ָ�롣
  static int countP;
};

class ArrayOfPoints
{
public:
  ArrayOfPoints(int n)
  {
    numberOfPoints = n;
    points = new Point[n];
  }
  ~ArrayOfPoints()
  {
    
    std::cout << "Deleting..." << std::endl;
    numberOfPoints = 0;
    delete[] points;  // ֻ�������Ż����Point���������������򲻻���ã�
  }

  // û�����copy���ƹ��캯��������Ǳ���ơ�
  ArrayOfPoints(ArrayOfPoints & pointsArray);


  Point& Element(int n)
  {
    return points[n];
  }

private:
  Point * points;
  int numberOfPoints;
};