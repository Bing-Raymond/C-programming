// 声明一个哺乳动物类Mammal，再由此派生出狗类Dog,声明一个Dog类的对象，观察基类与派生类的构造函数与析构函数
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