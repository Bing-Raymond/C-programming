#include <iostream>
#include <string>
using namespace std;


int countString(string& english);


int main()
{
  string length;
  cout << "Please enter some latter." << endl;
  // ʹ�������������һֱ¼�롣
  getline(cin,length);
  // ʹ����������������ո��ͦס�����磺Next to meet you. ��Ϊ�пո�ֻ��¼��Next
  // cin >> length;
  cout << "�ж��ٸ���ĸ�� " << countString(length) << endl;
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