#include <iostream>
#include <string>
using namespace std;


int countString(string& english);


int main()
{
  string length;
  cout << "Please enter some latter." << endl;
  // 使用下面这个，会一直录入。
  getline(cin,length);
  // 使用下面这个，遇到空格会挺住。比如：Next to meet you. 因为有空格，只会录入Next
  // cin >> length;
  cout << "有多少个字母： " << countString(length) << endl;
}

int countString(string& english)
{
  int number = 0;
  for (int i = 0; i < english.length(); i++)
  {
    if ((english[i] >= 'a' && english[i] <= 'z' )|| (english[i] >= 'A' && english[i] <= 'Z'))
      number++;
    else
      continue;
  }
  return number;}