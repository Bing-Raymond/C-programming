#pragma once

// ����Boat��Car�����࣬���߶���weight���ԣ�������ߵ�һ����Ԫ����totalWeight(),������ߵ������͡�
// ѧϰ���ǳ��õ�һ�����ӡ�totalWeight��Ҫʹ�����ô��ݣ�����ܺã�
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