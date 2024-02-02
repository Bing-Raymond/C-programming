// ��ֵ�㷨
// ͷ�ļ�<numeric>
// accumulate ��������������Ԫ�صĺ�
// partial_sum �ۼ������в���Ԫ�ص�ֵ�����������������һ��������
// adjacent_difference ��������������Ԫ�صĲ���������������һ��������
// inner_product �ۼ��������ж�ӦԪ�صĳɼ���Ҳ�������е��ڻ�

// Ӧ����ֵͨ���㷨���������н��в�����
#include <iostream>
#include <numeric>
#include <functional>
#include <vector>
using namespace std;

int main()
{
  int iarray[] = { 1,2,3,4,5 };
  vector<int> ivector(iarray, iarray + sizeof(iarray) / sizeof(int));
  
  // Ԫ�ص��ۼ�
  cout << accumulate(ivector.begin(), ivector.end(), 0) << endl;
  // �������ڻ�
  cout << inner_product(ivector.begin(), ivector.end(), ivector.begin(), 10) << endl;

  // ����������Ԫ�ؾֲ���
  partial_sum(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  // ��������������Ԫ�صĲ�ֵ
  adjacent_difference(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
//
//15
//65
//1 3 6 10 15
//1 1 1 1 1