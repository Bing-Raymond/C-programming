#pragma once
     // ����һ��Employee�࣬���а�����ʾ�������ֵ���ַ�����к��ұߵ����ԣ�����change_name()��display�����Ⱥ�����display����ʹ��cout�����ʾ�������ֵ���ַ�����к��ұߵ����ԣ�����change_name() �ñ������������ԣ�ʵ�ֲ���������ࡣ
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