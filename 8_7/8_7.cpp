#include "Trapzint.h"
#include <iomanip>
using namespace std;
int main()
{
  Fun f;                 // 声明Fun类的对象
  Trapz trapzl(f);       // 声明Trapz类的对象
  cout << "TRAPZ Int: " << setprecision(7) << trapzl(0, 2, 1e-7) << endl;  // 计算并输出结果
}