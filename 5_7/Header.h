#pragma once
// ʹ��static�ؼ��������ĺ�����Ա�Ǿ�̬�ģ���̬������Ա���������࣬ͬһ��������ж���ͬά����Ϊ��Щ����������
// ͬһ����ֻά��һ����̬������Ա�Ŀ�������Լ��ϵͳ�Ŀ�������߳��������Ч�ʡ�
// ����һ��Cat�࣬ӵ�о�̬���ݳ�ԱHowManyCats����¼Cat�ĸ�����Ŀ��������̬��Ա����GetHowMany()����ȡHowManyCats��
// ��δ���ѧ�Ĳ��٣�
// ��̬�ı������������ж����У������������ݹ���
// ��������ķ�������ɾ������ķ�����
// дһ��������������ľ�̬�������õ���ľ�̬���ԡ�
// ��Ĺ��췽�����������ɡ�û��Ҫ�ɣ���ʲô�ô��أ�

#include <iostream>
using namespace std;
class Cat
{
private:
  static int HowManyCats;

public:
  int itsAge;

public:
  Cat(int age):itsAge(age) { HowManyCats++; }
  // �������仰����������䡣������дһ�䣬 itsAge = age;
  // Cat(int age) { itsAge = age; HowManyCats++; }
  virtual ~Cat() { HowManyCats--; }
  virtual int getAge() { return itsAge; }
  virtual void setAge(int age) { itsAge = age; }
  static int getHowManyCats() { return HowManyCats; }
};