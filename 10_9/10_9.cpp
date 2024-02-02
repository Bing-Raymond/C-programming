// Ӧ�ò��ɱ������㷨���������н��з�����
// ���ɱ������㷨��Non-mutating algorithm)��ָ��Щ��ֱ���޸����������������ݵ��㷨�������㷨�����������в���Ԫ�ص��㷨��ִ����ȼ����㷨���Լ�������Ԫ�ؽ��м�����㷨��
// ���У������㷨��3������Ŀ�ģ���ĳ�����͵ļ��ϻ������У�����ĳ��Ԫ�ز����ظ�Ԫ���Ƿ��ڱ����ҵļ��ϻ������С�
// for_each �������ڵ�ÿһ��Ԫ�ؽ���ĳ����
// find ѭ������
// find_if ѭ�����ҷ����ض�������
// adjacent_find �������ڶ��ظ���Ԫ��
// find_first_of ����ĳЩԪ�ص��״γ��ֵ�
// find_end ����ĳ�������е����һ�γ��ֵ�
// count ����
// count_if ���ض������¼���
// mismatch �ҳ���ƥ���
// equal �ж����������Ƿ����
// search ����ĳ��������
// search_n ������������n�ε�������



#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main()
{
  int iarray[] = { 0,1,2,3,4,5,6,6,6,7,8 };
  vector<int> ivector(iarray, iarray + sizeof(iarray) / sizeof(int));
  int iarray1[] = { 6,6 };
  vector<int> ivector1(iarray1, iarray1 + sizeof(iarray1) / sizeof(int));
  int iarray2[] = { 5,6 };
  vector<int> ivector2(iarray2, iarray2 + sizeof(iarray2) / sizeof(int));
  int iarray3[] = { 0,1,2,3,4,5,7,7,7,9,7 };
  vector<int> ivector3(iarray3, iarray3 + sizeof(iarray3) / sizeof(int));
  
  // �ҳ�ivector������Ԫ��ֵ��ȵĵ�һ��Ԫ�ء�
  cout << *adjacent_find(ivector.begin(), ivector.end()) << endl; // 6

  // �ҳ�ivector��Ԫ��ֵΪ6��Ԫ�ظ�����
  cout << count(ivector.begin(), ivector.end(), 6) << endl;  // 3

  // �ҳ�ivector��С��7��Ԫ�ظ�����
  cout << count_if(ivector.begin(), ivector.end(), bind2nd(less<int>(), 7)) << endl;  // 9

  // �ҳ�ivector��Ԫ��ֵΪ4�ĵ�һ��Ԫ�����ڵ�λ�õ�Ԫ�ء�
  cout << *find(ivector.begin(), ivector.end(), 4) << endl;  // 4

  // �ҳ�ivector�д���2�ĵ�һ��Ԫ������λ�õ�Ԫ�ء�
  cout << *find_if(ivector.begin(), ivector.end(), bind2nd(greater<int>(), 2)) << endl; // 3

  // �ҳ�ivector��������ivector1�����ֵ����һ��λ�ã�������3��λ�õ�Ԫ�ء�
  cout << *(find_end(ivector.begin(), ivector.end(), ivector1.begin(), ivector1.end()) + 3) << endl; // 8

  // �ҳ�ivector��������ivector1�����ֵĵ�һ��λ�ã�������3��λ�õ�Ԫ�ء�
  cout << *(find_first_of(ivector.begin(), ivector.end(), ivector1.begin(), ivector1.end()) + 3) << endl;  // 7

  // ������ivector2��ivector�г��ֵ����λ��Ԫ�ء�
  cout << *search(ivector.begin(), ivector.end(), ivector2.begin(), ivector2.end()) << endl;  // 5

  // ������������3��6�����λ��Ԫ��
  cout << *search_n(ivector.begin(), ivector.end(), 3, 6, equal_to<int>()) << endl;  // 6

  // �ж���������ivector��ivector3�ȵȷ�0Ϊ�٣�1Ϊ�棩
  cout << equal(ivector.begin(), ivector.end(),ivector3.begin()) << endl;  // 0

  // ��������ivector3��ivector�в�ƥ����λ�á�
  typedef vector<int>::iterator ivecIter;
  pair<ivecIter, ivecIter> result = mismatch(ivector.begin(), ivector.end(), ivector3.begin());
  cout << result.first - ivector.begin() << endl;  // 6
}


// 6
// 3
// 9
// 4
// 3
// 8
// 7
// 5
// 6
// 0
// 6