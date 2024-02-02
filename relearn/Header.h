#pragma once
/*
我想重新学习下c++，不管是用来开发，还是什么，最少有些收获！也许可以实现层冷呢？
理想很远大，但是重新学习（因为原来也是啥也不会），受益良多！！！
*/
#include <iostream>
#include <string>
class Learn
{
private:
  char name[10];
  int time;
  std::string strName = "null";
                                                                                                                                                                                                                                                                                    
public:
  void setName(char* name);
  void setStrName();
  void setTime(int time);
  void show();

};