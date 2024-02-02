// 容器适配器。
// 适配器是用来扩展7种容器的。是修改和调整其他类接口的类。它们不提供粗放数据的实际数据结构的实现方法，而且容器适配器也不支持迭代器。
// 应用标准库中的deque顺序容器生成一个整数栈stack？deque容器在哪里？

#include <iostream>
#include <stack>  // 包含stack适配器头文件。
using namespace std;

template < class T>
void popElements(T& s);

int main()
{
  stack<int> intDequeStack;  // 默认情况下以deque容器作为基础数据结构。就这个？默认的就是？
  for (int i = 0; i < 10; ++i)
  {
    intDequeStack.push(i);
  }

  cout << "Popping from intDequeStack: ";
  popElements(intDequeStack);
  cout << endl;
}

template <class T>
void popElements(T& s)
{
  while (!s.empty())
  {
    cout << s.top() << ' ';
    s.pop();
  }
}
