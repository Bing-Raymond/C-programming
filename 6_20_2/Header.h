#pragma once
// 要求：实现一个名为SimpleCircle 的简单圆类，其数据成员int* itsRadius为一个指向半径值的指针，设计对数据成员的各种操作，给出这个类完整实现并测试这个类。
// 类一般要有的操作。
// 构造函数，有参数，没参数。
// 析构函数。
// 复制构造函数，需要const
// get，set方法，get需要const！
// 这个都要记住，并写全！

// 这种写法，很好。要学习。


class SimpleCircle
{
public:
  SimpleCircle();
  SimpleCircle(int rad);
  SimpleCircle(const SimpleCircle&);
  ~SimpleCircle() {} // 必须有大括号。
  int getRadius() const;
  void setRadius(int rad);
private:
  int* itsRadius;

};