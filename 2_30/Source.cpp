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
      std::cout << "数据已经增加。" << std::endl;
      break;
    case 'D':
      std::cout << "数据已经删除。" << std::endl;
      break;
    case 'S':
      std::cout << "数据已经排序。" << std::endl;
      break;
    case 'Q':
      // exit() 是什么东西？
      exit(0);
      break;
    default:
      break;
    }
  }

}