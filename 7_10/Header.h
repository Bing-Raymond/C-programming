// ����һ��object�࣬�����ݳ�ԱWeight����Ӧ�Ĳ����������ɴ�������box�࣬�������ݳ�ԱHeight��Width����Ӧ�Ĳ�������������һ��box���󣬹۲칹�캯�������������ĵ���˳��

#pragma once
#include <iostream>
using namespace std;
class Object
{
public:
  
  Object() { cout << "����Object����" << endl; }
  Object(int wei) :weight(wei) {}
  ~Object() { cout << "����Object����" << endl; }
  int getWeight()const { return weight; }
  void setWeight(int wei) { weight = wei; }

private:
  int weight;

};

class Box :public Object
{
public:
  Box() { cout << "����Box����" << endl; }
  ~Box() { cout << "����Box����" << endl; }
  int getHeight()const { return height; }
  int getWidth()const { return width; }
  void setHeight(int hei) { height = hei; }
  void setWidth(int wid) { width = wid; }

private:
  int height;
  int width;


};