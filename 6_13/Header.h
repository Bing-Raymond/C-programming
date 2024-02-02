#pragma once
 // ��̬��������
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
  static void getC() { std::cout << " Object id = " <<  std::endl; }
  void move(int x, int y)
  {
    X = x;
    Y = y;
  }
public:
  // ����һ��ָ���ྲ̬���ݳ�Ա��ָ�롣
  static int countP;
};