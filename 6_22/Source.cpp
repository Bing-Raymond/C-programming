#include <iostream>
using namespace std;
int index(char* s, char* t);
int main()
{
  int n;
  char str1[20], str2[20];
  cout << "����һ��Ӣ�ﵥ�ʣ� ";
  cin >> str1;
  cout << "������һ��Ӣ�ﵥ�ʣ� ";
  cin >> str2;
  n = index(str1, str2);
  if (n > 0)
  {
    cout << str2 << " �� " << str1 << " ������ڣ� " << n + 1 << " ��λ�á�" << endl;
  }
  else
    cout << str2 << " ���� " << str1 << " �С�" << endl;
}

int index(char* s, char* t)
{
  int i, j, k;
  for (i = 0; s[i] != '\0'; i++)   // i ��windows�ĳ��ȡ�
  {
    cout << "i out: " << i << " S: " << s[i] << " T: " << t[i] << endl;

    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)       // �����á�
    {
      cout << "i in: " << i << " S: " << s[j] << " T: " << t[k] << endl;
      if (t[k+1] == '\0')
        return i;
    }
  }
  return -1;
}