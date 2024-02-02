// 应用不可变序列算法对数据序列进行分析。
// 不可变序列算法（Non-mutating algorithm)是指那些不直接修改所操作的容器内容的算法。这类算法包括再序列中查找元素的算法，执行相等检查的算法，以及对序列元素进行计算的算法。
// 其中，查找算法有3个基本目的：再某种类型的集合或容器中，查找某个元素并返回该元素是否在被查找的集合或容器中。
// for_each 对区间内的每一个元素进行某操作
// find 循环查找
// find_if 循环查找符合特定条件者
// adjacent_find 查找相邻而重复的元素
// find_first_of 查找某些元素的首次出现点
// find_end 查找某个子序列的最后一次出现点
// count 计数
// count_if 在特定条件下计数
// mismatch 找出不匹配点
// equal 判断连个区间是否相等
// search 查找某个子序列
// search_n 查找连续发生n次的子序列



#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main()
{
  int iarray[] = { 0,1,2,3,4,5,6,6,6,7,8 };
  vector<int> ivector(iarray, iarray + sizeof(iarray) / sizeof(int));
  int iarray1[] = { 6,6 };
  vector<int> ivector1(iarray1, iarray1 + sizeof(iarray1) / sizeof(int));
  int iarray2[] = { 5,6 };
  vector<int> ivector2(iarray2, iarray2 + sizeof(iarray2) / sizeof(int));
  int iarray3[] = { 0,1,2,3,4,5,7,7,7,9,7 };
  vector<int> ivector3(iarray3, iarray3 + sizeof(iarray3) / sizeof(int));
  
  // 找出ivector中相邻元素值相等的第一个元素。
  cout << *adjacent_find(ivector.begin(), ivector.end()) << endl; // 6

  // 找出ivector中元素值为6的元素个数。
  cout << count(ivector.begin(), ivector.end(), 6) << endl;  // 3

  // 找出ivector中小于7的元素个数。
  cout << count_if(ivector.begin(), ivector.end(), bind2nd(less<int>(), 7)) << endl;  // 9

  // 找出ivector中元素值为4的第一个元素所在的位置的元素。
  cout << *find(ivector.begin(), ivector.end(), 4) << endl;  // 4

  // 找出ivector中大于2的第一个元素所在位置的元素。
  cout << *find_if(ivector.begin(), ivector.end(), bind2nd(greater<int>(), 2)) << endl; // 3

  // 找出ivector中子序列ivector1所出现的最后一个位置，再往后3个位置的元素。
  cout << *(find_end(ivector.begin(), ivector.end(), ivector1.begin(), ivector1.end()) + 3) << endl; // 8

  // 找出ivector中子序列ivector1所出现的第一个位置，再往后3个位置的元素。
  cout << *(find_first_of(ivector.begin(), ivector.end(), ivector1.begin(), ivector1.end()) + 3) << endl;  // 7

  // 子序列ivector2再ivector中出现的起点位置元素。
  cout << *search(ivector.begin(), ivector.end(), ivector2.begin(), ivector2.end()) << endl;  // 5

  // 查找连续出现3个6的起点位置元素
  cout << *search_n(ivector.begin(), ivector.end(), 3, 6, equal_to<int>()) << endl;  // 6

  // 判断连个区间ivector和ivector3先等否（0为假，1为真）
  cout << equal(ivector.begin(), ivector.end(),ivector3.begin()) << endl;  // 0

  // 查找区间ivector3再ivector中不匹配点的位置。
  typedef vector<int>::iterator ivecIter;
  pair<ivecIter, ivecIter> result = mismatch(ivector.begin(), ivector.end(), ivector3.begin());
  cout << result.first - ivector.begin() << endl;  // 6
}


// 6
// 3
// 9
// 4
// 3
// 8
// 7
// 5
// 6
// 0
// 6