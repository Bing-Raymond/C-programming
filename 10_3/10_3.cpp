#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> Link;
  int i, key, item;
  for (i = 0; i < 10; i++)
  {
    cin >> item;
    Link.push_front(item);
  }

  cout << "List: ";
  list<int>::iterator p = Link.begin();
  while (p != Link.end())
  {
    cout << *p << " ";
    p++;
  }

  cout << endl;

  cout << "请输入一个需要删除的整数: ";
  cin >> key;
  
  // 不好用，因为会碰到找不到指针的情况。这个要去PT的代码里找。确实有处理方法！

  //p = Link.begin();
  //while (p != Link.end())
  //{
  //  if (key == *p)
  //  {
  //    Link.remove(key);
  //    cout << "找到了，删除。" << endl;
  //  }
  //  else
  //  {
  //    p++;
  //  }
  //}

  cout << "List: ";
  p = Link.begin();
  while (p != Link.end())
  {
    cout << *p << " ";
    p++;
  }
  cout << endl;
}