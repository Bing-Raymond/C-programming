// ����Ŀ����� ++ ����Ϊ��Ա������ʽ
// ʹ��ʱ�������ӡ�
#pragma once
#include <iostream>
using namespace std;
class Clock
{
public:
  Clock(int newH = 0, int newM = 0, int newS = 0);
  void showTime() const;
  Clock& operator ++ ();   // ����ʲô������ָ���� ǰ�õ�Ŀ���������

  Clock operator ++(int);  // ���õ�Ŀ���������
private:
  int hour, minute, second;

};

