// ����һ�����༰�������࣬�ڹ��캯���������ʾ��Ϣ������������Ķ��󣬹۲칹�캯����ִ�������
#pragma once
#include <iostream>
using namespace std;
class BaseClass
{
public:
  BaseClass() { cout << "����Ĺ������" << endl; };
  ~BaseClass() { cout << "�������������" << endl; };

};

class DerivedClass :public BaseClass
{
public:
  DerivedClass() { cout << "�������������" << endl; }
};
