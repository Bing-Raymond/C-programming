#include <iostream>
using namespace std;
int index(char* s, char* t);
int main()
{
  int n;
  char str1[20], str2[20];
  cout << "输入一个英语单词： ";
  cin >> str1;
  cout << "输入另一个英语单词： ";
  cin >> str2;
  n = index(str1, str2);
  if (n > 0)
  {
    cout << str2 << " 在 " << str1 << " 中左起第： " << n + 1 << " 个位置。" << endl;
  }
  else
    cout << str2 << " 不在 " << str1 << " 中。" << endl;
}

int index(char* s, char* t)
{
  int i, j, k;
  for (i = 0; s[i] != '\0'; i++)   // i 是windows的长度。
  {
    cout << "i out: " << i << " S: " << s[i] << " T: " << t[i] << endl;

    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)       // 这个真好。
    {
      cout << "i in: " << i << " S: " << s[j] << " T: " << t[k] << endl;
      if (t[k+1] == '\0')
        return i;
    }
  }
  return -1;
}