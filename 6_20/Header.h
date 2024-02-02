#pragma once
// 动态创建对象。
// 潜复制。
// 深复制。
// 学习：
// 如果没有实现这个类的复制构造函数，执行下面的会是潜复制，只复制的地址。
// 这样，pointsArray1和pointsArray2的内容是一样的，并且，析构了1，2会收到影响！
// 实现了复制构造函数，就会是深复制。
// 再移动 pointsArray1的点，就不会影响pointsArray2了。
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
  Point(int xx, int yy)  // 不能这样写，因为有缺省的值，这些值是可以没有的。如果没有，xx和yy，那么这个函数相当于：Point() 所以后面建对象的时候会报错。
  {
    X = xx;
    Y = yy;
    std::cout << "Constructor called." << std::endl;
  }  // 带参数的构造函数。
  Point(Point& p);    // copy 构造函数。需要实现！

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
  // 创建一个指向类静态数据成员的指针。
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
    delete[] points;  // 只有这样才会调用Point的析构函数。否则不会调用！
  }

  // 没有这个copy复制构造函数，会是潜复制。
  ArrayOfPoints(ArrayOfPoints & pointsArray);


  Point& Element(int n)
  {
    return points[n];
  }

private:
  Point * points;
  int numberOfPoints;
};