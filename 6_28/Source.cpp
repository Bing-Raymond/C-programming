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
  // Ϊʲô�����أ�
  // Employee e1("����", "ƽ�����", "����", "10000");
   
  char n[] = "����";
  char str[] = "ƽ�����";
  char ct[] = "����";
  char z[] = "10000";
  Employee e1(n,str,ct,z);

  e1.display();
  cout << endl;
  char n2[] = "����";
  e1.change_name(n2);
  e1.display();
  cout << endl;
}