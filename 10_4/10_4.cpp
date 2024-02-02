// ������������
// ��������������չ7�������ġ����޸ĺ͵���������ӿڵ��ࡣ���ǲ��ṩ�ַ����ݵ�ʵ�����ݽṹ��ʵ�ַ�������������������Ҳ��֧�ֵ�������
// Ӧ�ñ�׼���е�deque˳����������һ������ջstack��deque���������

#include <iostream>
#include <stack>  // ����stack������ͷ�ļ���
using namespace std;

template < class T>
void popElements(T& s);

int main()
{
  stack<int> intDequeStack;  // Ĭ���������deque������Ϊ�������ݽṹ���������Ĭ�ϵľ��ǣ�
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
