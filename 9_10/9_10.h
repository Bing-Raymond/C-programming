#ifndef QUEUE_CLASS
#define QUEUE_CLASS
/*
�������Ŷ��еķ���������ʹ������ʵ�ֶ��У��ڶ���������Ƕ��������󡣳������������Ĺ��ܡ�
���������������Ⱥ�壬������������������洢�����е�Ԫ�ء���ջһ��������Ԫ�صķ���Ҳ�����޵ģ�ֻ����һ�ˣ���ͷ��ɾ��Ԫ�أ����ӣ�������һ�ˣ���β�����Ԫ�أ���ӣ�
���е�״̬��һ��״̬���Կգ�������
û��Ԫ��Ϊ�Կա�
����������ݳ�ԱӦ����������Ԫ�أ���ͷָ�룬��βָ�롣
��������ʼ������ӣ����ӣ���ն��У����ʶ���Ԫ�أ�������״̬��

������ѭ�����С�

*/

#include <iostream>
#include <cstdlib>
using namespace std;
const int MaxQSize = 50;      // ����Ԫ�����Ԫ��
//
template <class T>
class Queue
{
private:
  int front, rear, count;       // ��ͷָ�룬��βָ�룬Ԫ�ظ���
  T qlist[MaxQSize];            // ����Ԫ������
public:
  Queue(void);                  // ���캯������ʼ����ͷָ�룬��βָ�룬Ԫ�ظ���
  void QInsert(const T& ite);   // ��Ԫ�����
  T QDelete(void);              // Ԫ�س���
  void ClearQueue(void);        // ��ն���
  T QFront(void) const;         // ���ʶ���Ԫ��

  // ���Զ���״̬
  int QLength(void) const;      // ����г��ȣ�Ԫ�ظ�����
  int QEmpty(void) const;       // �ж϶��пշ�
  int QFull(void) const;        // �ж϶�������
};


// ���캯������ʼ����ͷָ�룬��βָ�룬Ԫ�ظ���
template <class T>
void Queue<T>::QInsert(const T& item)  // ���β����Ԫ�أ���ӣ�
{
  if (count == MaxQSize)               // �����������ֹ����
  {
    std::cerr << "Queue overflow!" << endl;
    exit(1);
  }
  count++;                             // Ԫ�ظ�����1
  qlist[rear] = item;                  // ���β����Ԫ��
  rear = (rear + 1) % MaxQSize;        // ��βָ������1����ȡ��������ʵ��ѭ������
}

template <class T>
T Queue<T>::QDelete(void)              // ɾ������Ԫ�أ������ظ�Ԫ�ص�ֵ�����ӣ� 
{
  T temp;
  if (count == 0)                      // ����ӿգ���ֹ����
  {
    std::cerr << "Deleting from an empty queue!" << endl;
    exit(1);
  }
  temp = qlist[front];                 // ��¼����Ԫ��ֵ��
  count--;                             // Ԫ�ظ����Լ�
  front = (front + 1) % MaxQSize;      // ����ָ����1��ȡ����ʵ��ѭ������
  return temp;                         // ������Ԫ��ֵ
}

template <class T>
T Queue<T>::QFront(void) const         // ���ʶ�����Ԫ�أ�������ֵ��
{
  return qlist[front];

}

template <class T>
int Queue<T>::QLength(void) const      // ���ض���Ԫ�ظ���
{
  return count;
}

template <class T>
int Queue<T>::QEmpty(void) const       // ���Զӿշ�
{
  return count == 0;
}

template <class T>
int Queue<T>::QFull(void) const        // ���Զ�����
{
  return count == MaxQSize;
}

template <class T>
void Queue<T>::ClearQueue(void)        // ��ն���
{
  count = 0;
  front = 0;
  rear = 0;
}

#endif // !QUEUE_CLASS
