// c++ ��׼�����Ϊ�������ṩ��3������������advance()��distance()��iter_swap() ��
// ǰ�����ṩ�����е�����һЩԭ��ֻ��������ʵ��������еķ��ʶ�������ǰ������˶��Ԫ�أ��Լ����������֮��ľ��롣�������������������û�����������������ֵ��
// 1��advance() �������Խ���������λ�����ӣ�֣�ҵķ����ɲ���������Ҳ����˵ʹ������һ��ǰ������˶��Ԫ�ء����ĵ����﷨����ʹ��void advance(InputIterator& pos, Dist n);
// �ú���ʹ�����͵�����ǰ��n��Ԫ�أ�����˫���������ʵ�������n����ȡ��ֵ����ʾ�����ʡ�
// 2��distance() �������Դ��������֮��ľ��룬�亯��ԭ��Ϊ��
// dist distance��InputIterator pos1�� InputIterator pos2����
// �ú��������������������pos1��pos2֮��ľ��룬��������������ָ��ͬһ��������
// �������������ʵ����������pos1��ʼ��ǰ�߱����ܹ�����pos2����pos2��λ�ñ�����pos1��ͬ���ں�
// 3��iter_swap() ���Խ�������������ָ���Ԫ��ֵ��
// void iter_swap(ForwardIterator1 pos1, ForwardIterator2 pso2)
// �ú������ڽ���������pos1 �� pos2 ��ָ���Ԫ��ֵ�������������Ͳ�����ͬ��������ָ�������ֵ��������໥��ֵ��

// ���������������������������б������е�Ԫ�ء�

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  int A[] = { 1,2,3,4,5 };
  const int N = sizeof(A) / sizeof(int);
  list<int> col1(A, A + N);
  ostream_iterator<int> output(cout, " ");
  cout << "List col1 contains: ";
  copy(col1.begin(), col1.end(), output);  // �����ʼ�б�����col1�е�Ԫ��
  
  list<int>::iterator pos = col1.begin();  // ����ָ���ʼԪ�صĵ�����
  cout << "\nThe first element is: " << *pos;  // �����һ��Ԫ��

  advance(pos, 3);  // ǰ������Ԫ�أ�ָ����ĸ�Ԫ��
  cout << "\nThe 4th element is: " << *pos;  // ������ĸ�Ԫ�ء�

  cout << "\nThe advanced distance is: " << distance(col1.begin(), pos);  // �����ǰ������λ�����ʼλ�õľ��롣

  iter_swap(col1.begin(), --col1.end());  // �����б������е�һ��Ԫ�غ����һ��Ԫ�ء�
  cout << "\nAfter exchange List col1 contains: ";
  copy(col1.begin(), col1.end(), output); // �������Ԫ�غ��б�����col1�е�Ԫ�ء�
  cout << endl;
}

//List col1 contains : 1 2 3 4 5
//The first element is : 1
//The 4th element is : 4
//The advanced distance is : 3
//After exchange List col1 contains : 5 2 3 4 10.
