#include <iostream>
#include "Header.h"
using namespace std;
Employee::Employee(char* n, char* str, char* ct, char* z)
{
  strcpy_s(name,n);
  strcpy_s(street, str);
  strcpy_s(city, ct);
  strcpy_s(zip, z);
}

void Employee::change_name(char* n)
{
  strcpy_s(name, n);
}

void Employee::display() const
{
  cout << "name: " << name << " street: " << street << " city: " << city << " zip: " << zip << endl;
}

int main()
{
  // 为什么不行呢？
  // Employee e1("张三", "平安大街", "北京", "10000");
   
  char n[] = "张三";
  char str[] = "平安大街";
  char ct[] = "北京";
  char z[] = "10000";
  Employee e1(n,str,ct,z);

  e1.display();
  cout << endl;
  char n2[] = "李四";
  e1.change_name(n2);
  e1.display();
  cout << endl;
}