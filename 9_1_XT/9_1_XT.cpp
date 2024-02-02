#include <iostream>
#include <iomanip>
#include "..\9_3\9_3.h"
using namespace std;
int main()
{
  int n;
  double AverScore, TotalScore = 0;
  cout << "please inter number os studaten:";
  cin >> n;
  Array<float> Score(n);
  for (int i = 0; i < n; i++)
  {
    cout << "请输入第" << i + 1 << "个学生的课程A成绩（1~100）：";
    cin >> Score[i];
    TotalScore += Score[i];
  }
  AverScore = TotalScore / n;
  cout << "平均成绩为：" << setprecision(4) << AverScore << endl;
  return 0;
}