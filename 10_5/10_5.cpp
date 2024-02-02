// 标准队列容器
// 队列是一种先进先出数据结构。标准队列容器也是使用适配器与一种基础容器相结合来实现的。
// 其基础容器通常用列表容器（list)或者双端队列容器（deque），默认情况下以deque实现。队列适配器提供特殊的操作功能，可以从基础数据结构的末尾插入如元素或在开头删除元素。
// 应用标准库中的deque顺序容器生成一个整数标准队列Queue。

#include <iostream>
#include <queue>
using namespace std;
template<class T>
void popElements(T& s);

int main()
{
  queue<int> intDequeQueue;  // 默认情况下，用Queue容器作为基础数据结构。
  for (int i = 0; i < 10; i++)
  {
    intDequeQueue.push(i);
  }
  cout << "Popping from intDequeQueue: ";
  popElements(intDequeQueue);
  cout << endl;

  cout << "size is : " << intDequeQueue.size() << endl;
}

template <class T>
void popElements(T& s)
{
  while (!s.empty())
  {
    cout << s.front() << ' ';
    s.pop();
  }
}