// ��������ͱ�������������������ÿ����㣩�Լ������ɾ�����ʹӦ�ó����й㷺ʹ�õĻ��������㷨�������������ķ�����������������װ�������㹹�������ࡣ
// ����������ݳ�Ա��
// �������ʾ����һ��˳����ʵ�����Ⱥ�壬��һ����ָ��������Node��Ͷ��󹹳ɣ���������κβ�����Ҫ��ͷ��㿪ʼ�����ԣ������ͷָ���Ǳ�ȻҪʹ�õġ�βָ������Ӧ����˵Ҳ�����õ���Ϣ��
// ���������Ƕ�̬���ݽṹ����������Ƕ�̬�仯�ģ������Ҫ��װ�����н���ʵʱά����
// �������˳������У�������Ҫ��һ��ָ����ͷ��㿪ʼ�����α�������㣬���մﵽ��Ҫ��λ�ã����ǽ���һָ����ָ��Ľ���Ϊ��ǰ��㣬���⻹��Ҫһ������ָ�룬
// ʼ��ָ��ǰ����ǰ����㣬�������ɽ��Ĳ��롢ɾ���Ȳ�����
// ����������������������ݳ�Ա�У���Ҫ�����ͷָ�룬��βָ�룬Ԫ�ظ�������ǰ�ı���λ�õ���Ϣ��
// ������ĳ�Ա����
// ����Ļ��������������½�㣬�����㣬ɾ����㣬����/�޸Ľ�����ݣ���������ȡ�
// ����������������ĳ�Ա�������Լ�Ϊ��ʵ����Щ��������ӵ�һЩ����������Ϊ�˷�������������ĸ�ֵ����Ӧ���ء�=���������
// ���⣬�����������ķ�װ���ԣ���Ȼ��Ҫ�ṩһЩ�ӿں�����
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
  // ���ݳ�Ա��
  Node<T>* front, *rear;          // ��ͷָ��ͱ�βָ��
  Node<T>* prevPtr, *currPtr;     // ��¼��ǰ����λ�õ�ָ�룬�ɲ����ɾ����������
  int size;                       // ���е�Ԫ�ظ���
  int position;                   // ��ǰԪ���ڱ��е�λ����š��ɺ���Resetʹ�á�

  // ������Ա��
  // �����½�㣬������Ϊitem��ָ����ΪptrNext
  Node<T>* GetNode(const T& item, Node<T>* ptrNext = NULL);
  
  // �ͷŽ�㣺
  void FreeNode(Node<T>* p);

  // ������L��������ǰ�����赱ǰ��Ϊ�գ�
  // �������Ĺ��캯����operator= ����
  void CopyList(const LinkedList<T>& L);

public:
  LinkedList(void);                // ���캯��
  LinkedList(const LinkedList<T>& L);     // �������캯��
  ~LinkedList(void);                      // ��������
  LinkedList<T>& operator= (const LinkedList<T>& L);  // ���ظ�ֵ�����

  int ListSize(void) const;                           // ����������Ԫ�صĸ�����size)
  int ListEmpty(void) const;                          // size ����0ʱ����TRUE�����򷵻�False

  void Reset(int pos = 0);                            // ��ָ��currPtr�ƶ������Ϊpos�Ľ�㣬prevPtr��Ӧ�ƶ�
                                                      // position ��¼��ǰ�������

  void Next(void);                                    // ʹprevPtr��currPtr�ƶ�����һ�����
  int EndOfList(void) const;                          // currPtr����NULLʱ����TRUE�����򷵻�False
  int CurrentPosition(void) const;                    // �������ݳ�Աposition

  void InsertFront(const T& item);                    // �ڱ�ͷ������
  void InsertRear(const T& item);                     // �ڱ�β������
  void InsertAt(const T& item);                       // �ڵ�ǰ���֮ǰ������
  void InsertAfter(const T& item);                    // �ڵ�ǰ���֮�������

  T DeleteFront(void);                                // ɾ��ͷ���
  void DeleteAt(void);                                // ɾ����ǰ���

  T& Data(void);                                      // ���ضԵ�ǰ����Աdata�����ã�ʹ��������Ա�ʹ�û��޸ģ�

  // ��������ͷ����н����ڴ�ռ䡣������������operator= ����
  void ClearList(void);

};

#endif // !LINKEDLIST_CLASS