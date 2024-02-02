// 声明一个object类，由数据成员Weight及相应的操作函数，由此派生出box类，增加数据成员Height和Width及相应的操作函数，声明一个box对象，观察构造函数与析构函数的调用顺序。

#pragma once
#include <iostream>
using namespace std;
class Object
{
public:
  
  Object() { cout << "构造Object对象。" << endl; }
  Object(int wei) :weight(wei) {}
  ~Object() { cout << "析构Object对象。" << endl; }
  int getWeight()const { return weight; }
  void setWeight(int wei) { weight = wei; }

private:
  int weight;

};

class Box :public Object
{
public:
  Box() { cout << "构造Box对象。" << endl; }
  ~Box() { cout << "析构Box对象。" << endl; }
  int getHeight()const { return height; }
  int getWidth()const { return width; }
  void setHeight(int hei) { height = hei; }
  void setWidth(int wid) { width = wid; }

private:
  int height;
  int width;


};