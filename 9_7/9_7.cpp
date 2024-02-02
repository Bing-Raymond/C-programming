// 9_7.cpp
#include <iostream>
#include "../9_6/9_6.h"
#include "../9_6/9_6.cpp"
using namespace std;

int main()
{
  LinkedList <int> Link;
  int i, key, item;
  // 
  for (i = 0; i < 10; i++)
  {
    cin >> item;
    Link.InsertFront(item);
  }

  //
  cout << "List: ";
  Link.Reset();
  //
  while (!Link.EndOfList())
  {
    cout << Link.Data() << "  ";
    Link.Next(); //
  }
  cout << endl;
  // 
  cout << "请输入一个需要删除的整数：";
  cin >> key;

  //
  Link.Reset();
  while (!Link.EndOfList())
  {
    if (Link.Data() == key)
      Link.DeleteAt();
    Link.Next();
  }

  //
  cout << "List: ";
  Link.Reset();
  //
  while (!Link.EndOfList())
  {
    cout << Link.Data() << "  ";
    Link.Next(); // 
  }
  cout << endl;

}