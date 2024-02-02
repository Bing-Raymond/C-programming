// 应用逆向迭代器和后插迭代器来操作向量容器中的元素。
// 迭代器适配器是用来扩展（或调整）迭代器功能的类。当然这样的适配器本身也被成为迭代器，只是这种迭代器是通过改变另一个迭代器而得到的。
// STL中定义了两类迭代器适配器：
// 逆向迭代器是一种适配器，它通过重新定义递增运算和递减运算，使其行为正好倒置。这样，使用这类迭代器，算法将以逆向次序处理元素。所有标准容器都允许使用逆向迭代器来遍历元素。
// 插入型迭代器用来将赋值操作转换为插入操作。通过这种迭代器，算法可以执行插入行为而不是覆盖行为。
// C++标准库提供了3种插入型迭代器：后插入迭代器（back inserter）、前插入迭代器（front inserter）和普通插入迭代器（general inserter）。
// C++标准库中，只有向量容器、双端队列容器、列表容器和字符串容器类支持后插入迭代器。

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int A[] = { 1,2,3,4,5 };
  const int N = sizeof(A) / sizeof(int);
  vector<int> col1(A, A + N);  // 将points数组转换成vector； 挺好用的； list3初始化为两个迭代器指定范围中元素的拷贝，范围中的元素类型必须与list3 的元素类型相容， 在本例中ilist3被初始化为{3,4,5,6}。
  cout << "size col1 = " << col1.size() << endl;
  ostream_iterator<int> output(cout, " ");
  cout << "List col1 contains: ";
  copy(col1.begin(), col1.end(), output);  // 输出初始向量容器rol1中的元素。这个挺好的。

  vector<int> ::iterator pos = col1.begin();  // 定义指向初始元素的迭代器。
  cout << "\nThe first element is: " << *pos;  // 输出第一个元素。
  
  vector<int>::reverse_iterator rpos = col1.rbegin();  // 应用逆向迭代器指向最后一个元素。
  
  cout << "\nThe last element is: " << *rpos << endl;  // 输出最后一个元素。
  
  back_insert_iterator<vector<int>> iter(col1);  // 声明后插迭代器。
  *iter = 66;  // 应用后插迭代器插入元素66。
  back_inserter(col1) = 88;  // 应用函数后插入元素88。
  copy(col1.begin(), col1.end(), output);  // 输出后插操作后的向量容器col1中的元素。
  
  cout << endl;
}


//List col1 contains : 1 2 3 4 5
//The first element is : 1
//The last element is : 5
//1 2 3 4 5 66 88