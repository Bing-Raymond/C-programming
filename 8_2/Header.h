// 将单目运算符 ++ 重载为成员函数形式
// 使用时钟做例子。
#pragma once
#include <iostream>
using namespace std;
class Clock
{
public:
  Clock(int newH = 0, int newM = 0, int newS = 0);
  void showTime() const;
  Clock& operator ++ ();   // 这是什么？返回指针吗？ 前置单目运算符重载

  Clock operator ++(int);  // 后置单目运算符重载
private:
  int hour, minute, second;

};

