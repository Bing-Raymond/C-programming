// ����ܼ򵥣��������˼���治��
// �������������8���ɼ�������ƽ���ɼ���
#include <iostream>
using namespace std;
#define N 8
int main()
{ //    �ܷ�          ƽ��ֵ
  float total = 0.0, average = 0.0;

  float grades[N];   // ��ųɼ������顣
  
  for (int i = 0; i < N; i++)
  {
    cout << "������ɼ�#��" << i+1 << endl;
    cin >> grades[i];
    total = total + grades[i];
  }

  cout << "ƽ���ɼ�Ϊ��" << (average = total / N) << endl;

}