#pragma once

// 声明Boat与Car两个类，二者都有weight属性，定义二者的一个友元函数totalWeight(),计算二者的重量和。
// 学习：非常好的一个例子。totalWeight需要使用引用传递！这个很好！
#include <iostream>
using namespace std;
class Car;
class Boat
{
private:
  float weigth;
public:
  Boat(float wei) :weigth(wei) { cout << "make boat weight: " << weigth << endl; }
  virtual void setWeight(float wei) { weigth = wei; }
  float getWeight() const { return weigth; }
  friend float totalWeight(Car& aCar, Boat& aBoat);
};

class Car
{
private:
  float weight;
public:
  Car(float wei) :weight(wei) { cout << "make car weight: " << weight << endl; }
  virtual void setWeight(float wei) { weight = wei; }
  float getWeight() const { return weight; }
  friend float totalWeight(Car& aCar, Boat& aBoat);
};

float totalWeight(Car& aCar, Boat& aBoat)
{
  return (aCar.weight + aBoat.weigth);
}