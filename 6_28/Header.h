#pragma once
     // 声明一个Employee类，其中包括表示姓名、街道地址、城市和右边等属性，包括change_name()和display（）等函数，display（）使用cout语句显示姓名、街道地址、城市和右边等属性；函数change_name() 该表对象的姓名属性；实现并测试这个类。
class Employee
{
private:
  char name[30];
  char street[30];
  char city[18];
  char zip[6];

public:
  Employee(char* n, char* str, char* ct, char* z);
  void change_name(char* n);
  void display()const;
};