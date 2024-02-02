#pragma once
// 使用static关键字声明的函数成员是静态的，静态函数成员属于整个类，同一个类的所有对象共同维护，为这些对象所共享。
// 同一个类只维护一个静态函数成员的拷贝，节约了系统的开销，提高程序的运行效率。
// 声明一个Cat类，拥有静态数据成员HowManyCats，记录Cat的个体数目；声明静态成员函数GetHowMany()，存取HowManyCats。
// 这段代码学的不少：
// 静态的变量，用于所有对象共有，这做到了数据共享。
// 建立对象的方法。和删除对象的方法。
// 写一个方法，调用类的静态方法来拿到类的静态属性。
// 类的构造方法的奇淫技巧。没必要吧？有什么好处呢？

#include <iostream>
using namespace std;
class Cat
{
private:
  static int HowManyCats;

public:
  int itsAge;

public:
  Cat(int age):itsAge(age) { HowManyCats++; }
  // 上面的这句话等于下面这句。可以少写一句， itsAge = age;
  // Cat(int age) { itsAge = age; HowManyCats++; }
  virtual ~Cat() { HowManyCats--; }
  virtual int getAge() { return itsAge; }
  virtual void setAge(int age) { itsAge = age; }
  static int getHowManyCats() { return HowManyCats; }
};