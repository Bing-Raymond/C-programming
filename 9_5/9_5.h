// �����ģ�壡
// ����Ľ��������ݺ�ָ����ʹ����Ļ���������
// �������������ڴ��Ⱥ����Ԫ�ص����ݣ��ȿ���ʹ���ɸ��������͵����ݣ�Ҳ����ʹ�Զ������͵����ݣ�����ʹ��Ƕ����
// ����ָ�������ڴ����������һ�����ĵ�ַ��

#ifndef NODE_CLASS
#define NODE_CLSS

// ����������
template <class T>
class Node
{
private:

  Node <T> *next;             // ָ������ڵ��ָ��

public:

  T data;                     // ������

  Node(const T& item, Node<T>* ptrnext = NULL);  // ���캯��

  void InsertAfter(Node<T> *p);                  // �ڱ����֮�����һ��ͬ���㡣
  Node<T>* DeleteAfter(void);                    // ɾ�������ĺ�����㣬���������ַ��
  Node<T>* NextNode(void) const;                 // ��ú������ĵ�ַ��
};

// ���ʵ�ֲ���
// ���캯������ʼ�����ݺ�ָ���Ա
template <class T>
Node <T>::Node(const T& item, Node <T>* ptrnext) : data(item), next(ptrnext)
{
}

// ���غ�������ָ��
template <class T>
Node <T>* Node<T>::NextNode(void) const
{
  return next;
}

// �ڵ�ǰ���֮�����һ�����P
template <class T>
void Node<T>::InsertAfter(Node<T>*p)
{
  p->next = next;        // p���ָ����ָ��ǰ���ĺ������
  next = p;              // ��ǰ����ָ����ָ��P
}

// ɾ����ǰ���ĺ�����㣬���������ַ��
template <class T>
Node<T>* Node<T>::DeleteAfter(void)
{
  Node<T>* tempPtr = next;   // ����ɾ���Ľ���ַ�洢��tempPtr��
  if (next == NULL)          // �����ǰ���û�к�����㣬�򷵻�NULL
  {
    return NULL;
  }
  next = tempPtr->next;      // ʹ��ǰ����ָ����ָ��tempPtr�ĺ������
  return tempPtr;            // ���ر�ɾ���Ľ��ĵ�ַ
}

#endif // !NODE_CLASS
