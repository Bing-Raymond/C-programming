#pragma once
/*
��������ѧϰ��c++����������������������ʲô��������Щ�ջ�Ҳ�����ʵ�ֲ����أ�
�����Զ�󣬵�������ѧϰ����Ϊԭ��Ҳ��ɶҲ���ᣩ���������࣡����
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