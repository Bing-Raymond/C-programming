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

  cout << "������һ����Ҫɾ��������: ";
  cin >> key;
  
  // �����ã���Ϊ�������Ҳ���ָ�����������ҪȥPT�Ĵ������ҡ�ȷʵ�д�������

  //p = Link.begin();
  //while (p != Link.end())
  //{
  //  if (key == *p)
  //  {
  //    Link.remove(key);
  //    cout << "�ҵ��ˣ�ɾ����" << endl;
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