// 建立链表和遍历链表（逐个访问链表的每个结点）以及插入和删除结点使应用程序中广泛使用的基本链表算法。按照面向对象的方法，将结点与操作封装起来，便构成链表类。
// 链表类的数据成员。
// 链表类表示的是一个顺序访问的线性群体，由一组用指针域串联的Node类和对象构成，对链表的任何操作都要由头结点开始。所以，链表的头指针是必然要使用的。尾指针对许多应用来说也是有用的信息。
// 由于链表是动态数据结构，其结点个数是动态变化的，因此需要封装在类中进行实时维护。
// 对链表的顺序访问中，往往需要有一个指针自头结点开始，依次遍历各结点，最终达到需要的位置，我们将这一指针所指向的结点称为当前结点，另外还需要一个伴随指针，
// 始终指向当前结点的前驱结点，以配合完成结点的插入、删除等操作。
// 综上所述，在链表类的数据成员中，需要保存表头指针，表尾指针，元素个数，当前的遍历位置等信息。
// 链表类的成员函数
// 链表的基本操作：生成新结点，插入结点，删除结点，访问/修改结点数据，遍历链表等。
// 包含完成上述操作的成员函数、以及为了实现这些函数而添加的一些辅助函数，为了方便链表类对象间的赋值，还应重载“=”运算符。
// 另外，由于面向对象的封装特性，当然还要提供一些接口函数。
#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;
#ifndef NULL
#define NULL=0;
#endif // !NULL

#include "../9_5/9_5.h"

template <class T>
class LinkedList                         
{
private:
  // 数据成员：
  Node<T>* front, *rear;          // 表头指针和表尾指针
  Node<T>* prevPtr, *currPtr;     // 记录表当前遍历位置的指针，由插入和删除操作更新
  int size;                       // 表中的元素个数
  int position;                   // 当前元素在表中的位置序号。由函数Reset使用。

  // 函数成员：
  // 生成新结点，数据域为item，指针域为ptrNext
  Node<T>* GetNode(const T& item, Node<T>* ptrNext = NULL);
  
  // 释放结点：
  void FreeNode(Node<T>* p);

  // 将链表L拷贝到当前表（假设当前表为空）
  // 被拷贝的构造函数，operator= 调用
  void CopyList(const LinkedList<T>& L);

public:
  LinkedList(void);                // 构造函数
  LinkedList(const LinkedList<T>& L);     // 拷贝构造函数
  ~LinkedList(void);                      // 析构函数
  LinkedList<T>& operator= (const LinkedList<T>& L);  // 重载赋值运算符

  int ListSize(void) const;                           // 返回链表中元素的个数（size)
  int ListEmpty(void) const;                          // size 等于0时返回TRUE，否则返回False

  void Reset(int pos = 0);                            // 将指针currPtr移动到序号为pos的结点，prevPtr相应移动
                                                      // position 记录当前结点的序号

  void Next(void);                                    // 使prevPtr和currPtr移动到下一个结点
  int EndOfList(void) const;                          // currPtr等于NULL时返回TRUE，否则返回False
  int CurrentPosition(void) const;                    // 返回数据成员position

  void InsertFront(const T& item);                    // 在表头插入结点
  void InsertRear(const T& item);                     // 在表尾插入结点
  void InsertAt(const T& item);                       // 在当前结点之前插入结点
  void InsertAfter(const T& item);                    // 在当前结点之后插入结点

  T DeleteFront(void);                                // 删除头结点
  void DeleteAt(void);                                // 删除当前结点

  T& Data(void);                                      // 返回对当前结点成员data的引用（使数据域可以被使用或修改）

  // 清空链表：释放所有结点的内存空间。被析构函数、operator= 调用
  void ClearList(void);

};

#endif // !LINKEDLIST_CLASS