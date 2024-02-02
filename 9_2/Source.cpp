// 9_2.cpp
// ʵ��һ���������ʹ洢����ģ��store��Ȼ��ͨ�������������Ͳ�������ģ�����ʵ�����������࣬Ȼ�����ٱ�ʵ�������ɶ���S1��S2��S3 ��D��
// ������ģ���ʵ�������̣��ڳ����������صģ�Ϊ����UMLͼ�б�ʾ���㣬�������Ҹ���ģ��ʵ�������ɵ���ȡ��ΪintStore�� doubleStore��StudentStore��
// ֻ����Щ�����ڳ����в������֡�
// �����ʵ�ͱ�׼�����������һ����˼������������Ϊ��Щ��׼�ⲻ���ã���Ȼ��ģ���㷨Ҳ��һ����˼������double��int�ļӷ�����

#include <iostream>
#include <cstdlib>
using namespace std;

struct Student                                             // �ṹ��
{
  int id;                                                  // ѧ��
  float gpa;                                               // ƽ����
};

template <class T>                                         // ��ģ�壺ʵ�ֶ������������ݽ��д�ȡ
class Store
{
private:
  T item;                                                  // item���ڴ���������͵�����
  int haveValue;                                           // haveValue���item�Ƿ��ѱ���������
public:
  Store(void);                                             // Ĭ����ʽ�����βΣ��Ĺ��캯��
  
  T GetElem(void);                                         // ��ȡ���ݺ���
  void PutElem(T x);                                       // �������ݺ���
};

template <class T>                                        // Ĭ����ʽ���캯����ʵ��
Store<T> ::Store(void) :haveValue(0)
{}

template <class T>                                        // ��ȡ���ݵ�ʵ��
T Store<T>::GetElem(void)
{
  if (haveValue == 0)                                     // �����ͼ��ȡδ��ʼ�������ݣ�����ֹ����
  {
    cout << "No item present!" << endl;                  
    exit(1);                                              // ʹ������ȫ�˳������ص�����ϵͳ��������������ʾ������ֹ��ԭ�򣬿��Ա�����ϵͳ����
  }
  return item;                                            // ����item��ŵ�����
}

template <class T>                                        // �������ݺ�������ʵ��
void Store<T>::PutElem(T x)
{
  haveValue++;                                            // ��haveValue��ΪTrue��
  item = x;                                               // ��x����item
}

int main()
{
  Student g = { 1000, 23 };                                // ����Student���ͽṹ�������ͬʱ���Գ�ֵ
  Store<int> S1, S2;                                       // ����Store<int>�����S1��S2���������ݳ�ԱitemΪint����
  Store<Student> S3;                                       // ����Store<Student>�����S3���������ݳ�ԱitemΪStudent����

  Store<double> D;                                         // ����Store<double>�����D, �������ݳ�ԱitemΪdouble����
  S1.PutElem(3);                                           // �����S1�г������ݣ���ʼ������S1��
  S2.PutElem(-7);                                          // �����S2�д������ݣ���ʼ������S2��
  cout << S1.GetElem() << " " << S2.GetElem() << endl;     // ���S1��S2�����ݳ�Ա
  S3.PutElem(g);                                           // �����D�д������ݣ���ʼ������D)
  cout << "The student id is " << S3.GetElem().id << endl; // �������S3 �����ݳ�Ա
  cout << "Retrieving object D  ";
  cout << D.GetElem() << endl;    // ���D�����ݳ�Ա
  // ����Dδ����ʼ������ִ�к���D.GetElem()�����е��³�����ֹ��
  return 0;
}