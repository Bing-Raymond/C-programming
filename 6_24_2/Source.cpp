// 代码很简单，但是这个思想真不错！
// 数组操作，输入8个成绩，返回平均成绩。
#include <iostream>
using namespace std;
#define N 8
int main()
{ //    总分          平均值
  float total = 0.0, average = 0.0;

  float grades[N];   // 存放成绩的数组。
  
  for (int i = 0; i < N; i++)
  {
    cout << "请输入成绩#：" << i+1 << endl;
    cin >> grades[i];
    total = total + grades[i];
  }

  cout << "平均成绩为：" << (average = total / N) << endl;

}