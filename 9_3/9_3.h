// ��̬������ģ��

#ifndef ARRAY_CLASS
#define ARRAY_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;
#ifndef NULL
const int NULL = 0;
#endif // NULL

// �������ͼ��ϣ������������ʹ��������С�����ڴ���������±�Խ�硣
enum ErrorType
{inavlidArraySize, memoryAllocationError, indexOutOfRange};

// ������Ϣ
const char* errorMsg[] =
{
  "Invalid array size","Memoryallocation error","Invalidindex:"
};

// ������ģ������
template <class T>
class Array
{
private:
  T* alist;  // T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
  int size;  // �����С��Ԫ�ظ�����
  void Error(ErrorType error, int badIndex = 0) const;  // ��������
public:
  Array(int sz = 50);  // ���캯��
  Array(const Array<T>& A);  // ��������
  ~Array(void);              // ��������
  Array <T>& operator= (const Array<T>& rhs);  // ���ز����� = ʹ����������帳ֵ
  T& operator[](int i);                        // ���ز�����[] ʹArray���������C++��ͨ���������
  operator T* (void) const;                    // ���ز�����*  ʹArray���������C++��ͨ���������
  int ListSize(void) const;                    // ȡ����Ĵ�С
  void Resize(int sz);                         // �޸�����Ĵ�С
};

// һ��Ϊ���Ա�����Ķ���
// ģ�庯��Errorʵ�����������Ϣ�Ĺ���
template <class T>
void Array<T>::Error(ErrorType error, int badIndex) const
{
  cout << errorMsg[error];         // ����������ͣ������Ӧ�Ĵ�����Ϣ
  if (error == indexOutOfRange)    
    cout << badIndex;              // ������±�Խ������������±�
  cout << endl;
  exit(1);
}

// ���캯�� 
template <class T>
Array <T>::Array(int sz)
{
  if (sz <= 0)                     // sz Ϊ�����С��Ԫ�ظ���������С��0�������������Ϣ
    Error(inavlidArraySize);
  size = sz;                       // ��Ԫ�ظ�����ֵ������size
  alist = new T[size];             // ��̬����size��T���͵�Ԫ�ؿռ�
  if (alist == NULL)               // ��������ڴ治�ɹ������������Ϣ
    Error(memoryAllocationError);
}

// ��������
template <class T>
Array <T>::~Array(void)
{
  delete[]alist;
}

// �������캯��
template <class T>
Array <T>::Array(const Array <T>& X)
{
  // �Ӷ���Xȡ�������С������ֵ����ǰ����ĳ�Ա
  int n = X.size;
  size = n;
  // Ϊ���������ڴ沢���г�����
  alist = new T[n];    // ��̬����n��T���͵�Ԫ�ؿռ�
  if (alist == NULL)   // ��������ڴ治�ɹ������������Ϣ
  {
    Error(memoryAllocationError);
  }
  // �Ӷ���X��������Ԫ�ص�������
  T* srcptr = X.alist;          // X.alist �Ƕ���X�������׵�ַ
  T* destptr = alist;           // alist �Ǳ������е������׵�ַ
  while (n--)                   // �����������Ԫ��
    *destptr++ = *srcptr++;
}

// ���ء�=���������������rhs��ֵ��������ʵ�ֶ���֮������帳ֵ��
template <class T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
  int n = rhs.size;             // ȡrhs�������С

  // ����������������С��rhs��ͬ����ɾ������ԭ���ڴ棬Ȼ�����·��䡣
  if (size != n)
  {
    delete[] alist;             // ɾ������ԭ���ڴ�
    alist = new T[n];           // ���·���n��Ԫ�ص��ڴ�
    if (alist == NULL)          // ��������ڴ治�ɹ������������Ϣ
    {
      Error(memoryAllocationError);
    }
    size = n;                   // ��¼������������С
  }
  // ��rhs�򱾶�����Ԫ��
  T* destptr = alist;
  T* srcptr = rhs.alist;
  while (n--)
    *destptr++ = *srcptr++;
  return *this;                 // ���ص�ǰ���������
}

// �����±��������ʵ������ͨ����һ��ͨ���±����Ԫ�أ�������Խ���鹦�ܡ�
template <class T>
T& Array<T>::operator[](int n)
{
  if (n<0 || n>size - 1)         // ����±��Ƿ�Խ��
  {
    Error(indexOutOfRange, n);
  }
  return alist[n];               // �����±�Ϊn������Ԫ��
}

// ����ָ��ת�����������Array��Ķ�����ת��ΪT���͵�ָ�룬
// ָ��ǰ�����е�˽�����飬
// ���������ʹ����ͨ�����׵�ַһ��ʹ��Array��Ķ�����
template <class T>
Array<T>::operator T *(void) const
{
  return alist;                  // ���ص�ǰ������˽��������׵�ַ
}

// ȡ��ǰ����Ĵ�С
template <class T>
int Array<T>::ListSize(void) const
{
  return Resize;
}

// �������С�޸�Ϊsz
template <class T>
void Array<T>::Resize(int sz)
{
  if (sz <= 0)                   // ����Ƿ�sz <= 0
    Error(inavlidArraySize);
  if (sz == size)                // ���ָ���Ĵ�С��ԭ�д�Сһ����ʲôҲ������
    return;
  T* newlist = new T[sz];        // �����µ������ڴ�
  if (newlist == NULL)           // ���������ڴ��Ƿ�����ɹ�
    Error(memoryAllocationError);
  int n = (sz <= size) ? sz : size;  // ��sz��size�н�С��һ����ֵ��n
  // ��ԭ��������ǰn��Ԫ�ظ��Ƶ���������
  T* srcptr = alist;             // ԭ����alist���׵�ַ
  T* destptr = newlist;          // ������newlist���׵�ַ
  while (n--)                    // ��������Ԫ��
    *destptr++ = *srcptr++;       //
  delete[] alist;                // ɾ��ԭ����
  alist = newlist;               // ʹalistָ��������
  size = sz;                     // ����size
}
#endif // !ARRAY_CLASS