#include <iostream>
#include <cstdlib>
int main()
{
  char choice;
  while (1)
  {
    std::cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one:";
    std::cin >> choice;
    switch (toupper(choice))
    {
    case 'A':
      std::cout << "�����Ѿ����ӡ�" << std::endl;
      break;
    case 'D':
      std::cout << "�����Ѿ�ɾ����" << std::endl;
      break;
    case 'S':
      std::cout << "�����Ѿ�����" << std::endl;
      break;
    case 'Q':
      // exit() ��ʲô������
      exit(0);
      break;
    default:
      break;
    }
  }

}