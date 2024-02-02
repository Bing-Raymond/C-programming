// ջ��
// Ӧ�ð�����ջԪ�أ�ջ��ָ�롣���������飬Ҳ�����������ṹ�������֣��������飬��������
// ջ���У�һ��״̬��ջ�գ�ջ������ջ��û��Ԫ��ʱ��Ϊ�գ���ջ��Ԫ�ظ����ﵽ����ʱ����Ϊ����
// һ��״̬���ǲ��գ�������
// ��Ҫ����ʼ������ջ����ջ��ջ��գ�����ջ��Ԫ�أ����ջ��״̬��
#ifndef STACK_CLASS
#define STACK_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;
const int MaxStackSize = 50;    // ջ�Ĵ�С����ջ��Ԫ�ص�������

                                // ������
template <class T>
class Stack
{
private:
  T stackList[MaxStackSize];    // ���飬���ڴ��ջ��Ԫ��
  int top;                      // ջ��λ�ã������±꣩
public:
  Stack(void);                  // ���캯������ʼ��ջ
  void Push(const T& item);     // ��Ԫ��itemѹ��ջ
  T Pop(void);                  // ��ջ��Ԫ�ص���ջ
  void ClearStack(void);        // ��ջ���
  T Peek(void) const;           // ����ջ��Ԫ��
  int StackEmpty(void) const;   // �����Ƿ�ջΪ��
  int StackFull(void) const;    // �����Ƿ�ջΪ��
};

template <class T>
Stack<T> ::Stack(void) :top(-1)    // ���캯����ջ����ʼ��Ϊ -1
{}

template <class T>
void Stack<T>::Push(const T& item)    // ��Ԫ��itemѹ��ջ
{
  if (top == MaxStackSize)            // ���ջ����������ֹ
  {
    std::cerr << "Stack overflow!" << endl;
    exit(1);
  }
  top++;
  stackList[top] = item;              // Ԫ��ѹ��ջ��
}

template <class T>
T Stack<T>::Pop(void)                 // ��ջ��Ԫ�ص���ջ
{
  T temp;
  if (top == -1)                      // ���ջ�գ�������ֹ
  {
    std::cerr << "Attempt to pop an epty stack!" << endl;
    exit(1);
  }

  temp = stackList[top];              // ȡ��ջ��Ԫ��
  top--;                              // ջ��ָ���Լ�
  return temp;                        // ����ջ��Ԫ��
}

template <class T>
T Stack<T>::Peek(void) const          // ����ջ��Ԫ��
{
  if (top == -1)                      // ���ջ�գ�������ֹ
  {
    std::cerr << "Attempt to peek at an epty stack!" << endl;
    exit(1);

  }

  return stackList[top];              // ����ջ��Ԫ��

}

template <class T>
int Stack<T>::StackEmpty(void) const        // ����ջ�Ƿ��
{
  return top == -1;                         // ���ջ���򷵻�TRUE�����򷵻�FALSE
}

template <class T>
int Stack<T>::StackFull(void) const         // �����Ƿ�ջ��
{
  return top == MaxStackSize - 1;           // ���ջ���򷵻�TRUE�����򷵻�FALSE
}

template <class T>
void Stack<T>::ClearStack(void)             // ���ջ
{
  top = -1;
}

#endif // !STACK_CLASS