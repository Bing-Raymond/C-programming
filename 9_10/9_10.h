#ifndef QUEUE_CLASS
#define QUEUE_CLASS
/*
用数组存放队列的方法。可以使用链表实现队列，在队列类中内嵌链表类对象。充分利用链表类的功能。
队列是特殊的线性群体，可以用数组或链表来存储队列中的元素。与栈一样，队列元素的访问也是受限的，只能在一端（对头）删除元素（出队），在另一端（队尾）添加元素（入队）
队列的状态：一般状态，对空，队满。
没有元素为对空。
队列类的数据成员应包括：队列元素，对头指针，队尾指针。
操作：初始化，入队，出队，清空队列，访问队首元素，检查队列状态。

可以做循环队列。

*/

#include <iostream>
#include <cstdlib>
using namespace std;
const int MaxQSize = 50;      // 队列元素最大元素
//
template <class T>
class Queue
{
private:
  int front, rear, count;       // 对头指针，对尾指针，元素个数
  T qlist[MaxQSize];            // 队列元素数组
public:
  Queue(void);                  // 构造函数，初始化对头指针，队尾指针，元素个数
  void QInsert(const T& ite);   // 新元素入队
  T QDelete(void);              // 元素出队
  void ClearQueue(void);        // 清空队列
  T QFront(void) const;         // 访问队首元素

  // 测试队列状态
  int QLength(void) const;      // 求队列长度（元素个数）
  int QEmpty(void) const;       // 判断队列空否
  int QFull(void) const;        // 判断队列满否
};


// 构造函数，初始化对头指针，队尾指针，元素个数
template <class T>
void Queue<T>::QInsert(const T& item)  // 向队尾插入元素（入队）
{
  if (count == MaxQSize)               // 如果队满，中止程序
  {
    std::cerr << "Queue overflow!" << endl;
    exit(1);
  }
  count++;                             // 元素个数增1
  qlist[rear] = item;                  // 向队尾插入元素
  rear = (rear + 1) % MaxQSize;        // 队尾指针增加1，用取余数运算实现循环队列
}

template <class T>
T Queue<T>::QDelete(void)              // 删除队首元素，并返回该元素的值（出队） 
{
  T temp;
  if (count == 0)                      // 如果队空，终止程序
  {
    std::cerr << "Deleting from an empty queue!" << endl;
    exit(1);
  }
  temp = qlist[front];                 // 记录队首元素值。
  count--;                             // 元素个数自减
  front = (front + 1) % MaxQSize;      // 队首指针增1，取余以实现循环队列
  return temp;                         // 返回首元素值
}

template <class T>
T Queue<T>::QFront(void) const         // 访问队列首元素（返回其值）
{
  return qlist[front];

}

template <class T>
int Queue<T>::QLength(void) const      // 返回队列元素个数
{
  return count;
}

template <class T>
int Queue<T>::QEmpty(void) const       // 测试队空否
{
  return count == 0;
}

template <class T>
int Queue<T>::QFull(void) const        // 测试队满否
{
  return count == MaxQSize;
}

template <class T>
void Queue<T>::ClearQueue(void)        // 清空队列
{
  count = 0;
  front = 0;
  rear = 0;
}

#endif // !QUEUE_CLASS
