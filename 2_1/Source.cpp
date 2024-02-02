#include <iostream>
// 这个cstdlib 有什么用？不知道。
//#include <cstdlib>
using namespace std;

int main()
{
  char flag;
  while (1)
  {
    cout << "现在下雨吗？（Yes or No）";
    cin >> flag;
    // toupper（char） 变成大写字母。
    if (toupper(flag) == 'Y')
    {
      cout << "现在正在下雨。";
      break;
    }
    if (toupper(flag) == 'N')
    {
      cout << "现在没有下雨。";
      break;
    }
  }


}