// ����ö������weekday, ����Sunday �� Saturday ��7��Ԫ�أ��ٳ���������weekday���͵ı��������丳ֵ���������ͱ����������ܷ���丳weekday���͵�ֵ��
#include <iostream>
enum weekday
{
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

int main()
{
  int i;
  weekday d = Thursday;
  std::cout << "d = " << d << std::endl;
  i = d;
  std::cout << "i = " << i << std::endl;

}