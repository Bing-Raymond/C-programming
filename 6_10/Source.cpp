// �������������������������ֺ�С�����ֱַ������
// Ϊʲô��������������Ĳ���д����*����������ʱ��д����&�أ�
#include<iostream>
using namespace std;
void splitfloat(float x, int *intpart, float *fracpart)
{
  // *intpart ��ʾ����������intpart��ַ�ϵ�����
  *intpart = int(x);
  *fracpart = x - int(x);
}

// ������Ҳһ���ģ����Ҹ�����⡣
void splitfloat2(float x, int& intpart, float& fracpart)
{
  intpart = int(x);
  fracpart = x - intpart;
}

int main()
{
  int i, n;
  float x, f;
  cout << "Enter 3 float point numbers: " << endl;
  cout << "splitfloat: " << endl;
  for (i = 0; i < 3; i++)
  {
    cin >> x;
    splitfloat(x,&n,&f); // ��ʾ����ȥ���ǵ�ַ�����������á�
    cout << "�������֣� " << n << " С�����֣�" << f << endl;
  }
  cout << "Enter 3 float point numbers: " << endl;
  cout << "splitfloat2: " << endl;
  for (i = 0; i < 3; i++)
  {
    cin >> x;
    splitfloat2(x, n, f);
    cout << "�������֣� " << n << " С�����֣�" << f << endl;
  }
}