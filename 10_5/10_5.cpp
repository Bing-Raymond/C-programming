// ��׼��������
// ������һ���Ƚ��ȳ����ݽṹ����׼��������Ҳ��ʹ����������һ�ֻ�������������ʵ�ֵġ�
// ���������ͨ�����б�������list)����˫�˶���������deque����Ĭ���������dequeʵ�֡������������ṩ����Ĳ������ܣ����Դӻ������ݽṹ��ĩβ������Ԫ�ػ��ڿ�ͷɾ��Ԫ�ء�
// Ӧ�ñ�׼���е�deque˳����������һ��������׼����Queue��

#include <iostream>
#include <queue>
using namespace std;
template<class T>
void popElements(T& s);

int main()
{
  queue<int> intDequeQueue;  // Ĭ������£���Queue������Ϊ�������ݽṹ��
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