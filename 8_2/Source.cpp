#include"Header.h"
Clock::Clock(int newH , int newM, int newS)   // 构造函数
{
  if (newH >= 0 && newH <= 60 && 0 <= newM && newM <= 60 && newS >= 0 && newS <= 60)
  {
    hour = newH;
    minute = newM;
    second = newS;
  }
  else
    cout << "Time error." << endl;
}

void Clock::showTime()const                    // 显示时间
{
  cout << hour << " : " << minute << " : " << second << endl;
}

Clock& Clock::operator++()                     // 前置单目运算符重载函数
{
  second++;
  if (second >= 60)
  {
    second = second - 60;
    minute++;
    if (minute >= 60)
    {
      minute = minute - 60;
      hour++;
      hour = hour % 24;
    }
  }
  return *this;
}

Clock Clock::operator++(int)                          // 后置单目运算符重载，形参表中的int不使用，只是为了区分前置还是后置。
{
  Clock old = *this;
  ++(*this);
  return old;
}