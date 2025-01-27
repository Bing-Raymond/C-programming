// 结点类模板！
// 链表的结点包括数据和指针域，使链表的基本构件。
// 结点的数据域用于存放群体中元素的内容，既可以使若干个基本类型的数据，也可以使自定义类型的数据，甚至使内嵌对象。
// 结点的指针域用于存放链表中另一个结点的地址。

#ifndef NODE_CLASS
#define NODE_CLSS

// 类声明部分
template <class T>
class Node
{
private:

  Node <T> *next;             // 指向后续节点的指针

public:

  T data;                     // 数据域

  Node(const T& item, Node<T>* ptrnext = NULL);  // 构造函数

  void InsertAfter(Node<T> *p);                  // 在本结点之后插入一个同类结点。
  Node<T>* DeleteAfter(void);                    // 删除本结点的后续结点，并返回其地址。
  Node<T>* NextNode(void) const;                 // 获得后续结点的地址。
};

// 类的实现部分
// 构造函数，初始化数据和指针成员
template <class T>
Node <T>::Node(const T& item, Node <T>* ptrnext) : data(item), next(ptrnext)
{
}

// 返回后续结点的指针
template <class T>
Node <T>* Node<T>::NextNode(void) const
{
  return next;
}

// 在当前结点之后插入一个结点P
template <class T>
void Node<T>::InsertAfter(Node<T>*p)
{
  p->next = next;        // p结点指针域指向当前结点的后续结点
  next = p;              // 当前结点的指针域指向P
}

// 删除当前结点的后续结点，并返回其地址。
template <class T>
Node<T>* Node<T>::DeleteAfter(void)
{
  Node<T>* tempPtr = next;   // 将欲删除的结点地址存储到tempPtr中
  if (next == NULL)          // 如果当前结点没有后续结点，则返回NULL
  {
    return NULL;
  }
  next = tempPtr->next;      // 使当前结点的指针域指向tempPtr的后续结点
  return tempPtr;            // 返回被删除的结点的地址
}

#endif // !NODE_CLASS
