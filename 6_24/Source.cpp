#include <iostream>
// 使用string类型，需要引入头文件。
#include <string>
using namespace std;
int main()
{
  string S1 = "DEF", S2 = "123";

  S2 = S1 + S2;
 
  cout << "S2 = S1 + S2: " <<  S2 << endl;
  cout << "S2" << endl;

}