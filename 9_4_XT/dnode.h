#ifndef DOUBLY_LINKED_NODE_CLASS

#define DOUBLY_LINKED_NODE_CLASS

template <class T>
class DNode
{
private:
  DNode<T>* left;
  DNode<T>* right;
public:
  T data;
  DNode(void);
  DNode(const T& item);
  void InsertRight(DNode<T>* p);
  void InsertLeft(DNode<T>* p);
  DNode<T>* DeleteNode(void);

  DNode<T>* NextNodeRight(void) const;
  DNode<T>* NextNodeLeft(void) const;

};

template <class T>
DNode<T>::DNode(const T& item)
{                                                                 
  left = right = this;
  data = item;
}

template <class T>
void DNode<T>::InsertRight(DNode<T>* p)
{
  p->right = right;
  right->left = p;
  p->left = this;
  right = p;
}

template <class T>
void DNode<T>::InsertLeft(DNode<T>* p)
{
  p->left = left;
  left->right = p;
  p->right = this;
  left = p;
}

template <class T>
DNode<T>* DNode<T>::DeleteNode(void)
{
  left->right = right;
  right->left = left;
  return this;
}

template <class T>
DNode<T>* DNode<T>::NextNodeRight(void) const
{
  return right;
}

templaate <class T>
DNode<T>* DNode<T>::NextNodeLeft(void) const
{
  return left;
}



#endif // !DOUBLY_LINKED_NODE_CLASS
