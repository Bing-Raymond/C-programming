// Ӧ������������ͺ����������������������е�Ԫ�ء�
// ��������������������չ������������������ܵ��ࡣ��Ȼ����������������Ҳ����Ϊ��������ֻ�����ֵ�������ͨ���ı���һ�����������õ��ġ�
// STL�ж����������������������
// �����������һ������������ͨ�����¶����������͵ݼ����㣬ʹ����Ϊ���õ��á�������ʹ��������������㷨�������������Ԫ�ء����б�׼����������ʹ�����������������Ԫ�ء�
// �����͵�������������ֵ����ת��Ϊ���������ͨ�����ֵ��������㷨����ִ�в�����Ϊ�����Ǹ�����Ϊ��
// C++��׼���ṩ��3�ֲ����͵�������������������back inserter����ǰ�����������front inserter������ͨ�����������general inserter����
// C++��׼���У�ֻ������������˫�˶����������б��������ַ���������֧�ֺ�����������

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int A[] = { 1,2,3,4,5 };
  const int N = sizeof(A) / sizeof(int);
  vector<int> col1(A, A + N);  // ��points����ת����vector�� ͦ���õģ� list3��ʼ��Ϊ����������ָ����Χ��Ԫ�صĿ�������Χ�е�Ԫ�����ͱ�����list3 ��Ԫ���������ݣ� �ڱ�����ilist3����ʼ��Ϊ{3,4,5,6}��
  cout << "size col1 = " << col1.size() << endl;
  ostream_iterator<int> output(cout, " ");
  cout << "List col1 contains: ";
  copy(col1.begin(), col1.end(), output);  // �����ʼ��������rol1�е�Ԫ�ء����ͦ�õġ�

  vector<int> ::iterator pos = col1.begin();  // ����ָ���ʼԪ�صĵ�������
  cout << "\nThe first element is: " << *pos;  // �����һ��Ԫ�ء�
  
  vector<int>::reverse_iterator rpos = col1.rbegin();  // Ӧ�����������ָ�����һ��Ԫ�ء�
  
  cout << "\nThe last element is: " << *rpos << endl;  // ������һ��Ԫ�ء�
  
  back_insert_iterator<vector<int>> iter(col1);  // ��������������
  *iter = 66;  // Ӧ�ú�����������Ԫ��66��
  back_inserter(col1) = 88;  // Ӧ�ú��������Ԫ��88��
  copy(col1.begin(), col1.end(), output);  // ��������������������col1�е�Ԫ�ء�
  
  cout << endl;
}


//List col1 contains : 1 2 3 4 5
//The first element is : 1
//The last element is : 5
//1 2 3 4 5 66 88