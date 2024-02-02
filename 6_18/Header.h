#pragma once
// 动态创建对象。
// 在main里只建立一个ArrayOfPoints类对象，对象的初始化参数number指定了数组元素的个数，创建和删除对象数组的过程都由ArrayOfPoints类的构造函数和析构函数完成。这样虽然更简洁，但是对数组元素的访问形式Element(0)却显得啰嗦。
// 如果希望像数组一样访问，通过下标[]操作符号来访问，需要对下标操作符进行重载。
#include <iostream>
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
  }

  Point& Element(int n)
  {
    return points[n];
  }

private:
  Point * points;
  int numberOfPoints;
};