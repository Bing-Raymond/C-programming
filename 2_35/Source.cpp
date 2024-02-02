// 声明枚举类型weekday, 包括Sunday 到 Saturday 这7个元素，再程序中声明weekday类型的变量，对其赋值，声明整型变量，看看能否对其赋weekday类型的值。
#include <iostream>
enum weekday
{
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

int main()
{
  int i;
  weekday d = Thursday;
  std::cout << "d = " << d << std::endl;
  i = d;
  std::cout << "i = " << i << std::endl;

}