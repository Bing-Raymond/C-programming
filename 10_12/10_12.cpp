// 数值算法
// 头文件<numeric>
// accumulate 计算序列中所有元素的和
// partial_sum 累加序列中部分元素的值，并将结果保持在另一个序列中
// adjacent_difference 计算序列中相邻元素的差，并将结果保存在另一个序列中
// inner_product 累加连个序列对应元素的成绩，也就是序列的内积

// 应用数值通用算法对数据序列进行操作。
#include <iostream>
#include <numeric>
#include <functional>
#include <vector>
using namespace std;

int main()
{
  int iarray[] = { 1,2,3,4,5 };
  vector<int> ivector(iarray, iarray + sizeof(iarray) / sizeof(int));
  
  // 元素的累计
  cout << accumulate(ivector.begin(), ivector.end(), 0) << endl;
  // 向量的内积
  cout << inner_product(ivector.begin(), ivector.end(), ivector.begin(), 10) << endl;

  // 向量容器中元素局部和
  partial_sum(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  // 向量容器中相邻元素的差值
  adjacent_difference(ivector.begin(), ivector.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
}
//
//15
//65
//1 3 6 10 15
//1 1 1 1 1