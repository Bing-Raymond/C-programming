#include"Header.h"
Clock::Clock(int newH , int newM, int newS)   // ���캯��
{
  if (newH >= 0 && newH <= 60 && 0 <= newM && newM <= 60 && newS >= 0 && newS <= 60)
  {
    hour = newH;
    minute = newM;
    second = newS;
  }
  else
    cout << "Time error." << endl;
}

void Clock::showTime()const                    // ��ʾʱ��
{
  cout << hour << " : " << minute << " : " << second << endl;
}

Clock& Clock::operator++()                     // ǰ�õ�Ŀ��������غ���
{
  second++;
  if (second >= 60)
  {
    second = second - 60;
    minute++;
    if (minute >= 60)
    {
      minute = minute - 60;
      hour++;
      hour = hour % 24;
    }
  }
  return *this;
}

Clock Clock::operator++(int)                          // ���õ�Ŀ��������أ��βα��е�int��ʹ�ã�ֻ��Ϊ������ǰ�û��Ǻ��á�
{
  Clock old = *this;
  ++(*this);
  return old;
}