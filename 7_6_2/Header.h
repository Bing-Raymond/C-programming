// ����һ�����鶯����Mammal�����ɴ�����������Dog,����һ��Dog��Ķ��󣬹۲������������Ĺ��캯������������
#pragma once

#include <iostream>
using namespace std;
enum myColor {BLACK, WHITE};
class Mammal
{
public:
  Mammal();
  ~Mammal();
  int getAge()const { return itsAge; }
  void setAge(int age) { itsAge = age; }
  int getWeight()const { return itsWeight; }
  void setWeight(int weight) { itsWeight = weight; }
  void speak()const { cout << "Mammal sound! \n"; }

protected:
  int itsAge;
  int itsWeight;
};

class Dog :public Mammal
{
public:
  Dog();
  ~Dog();

  myColor getColor()const { return itsColor; }  void setColor(myColor color) { itsColor = color; }  void wagTail() { cout << "Tail wagging... \n"; }private:  myColor itsColor;};