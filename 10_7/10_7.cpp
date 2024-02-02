// c++ 标准程序库为迭代器提供了3个辅助函数：advance()、distance()和iter_swap() 。
// 前两个提供了所有迭代器一些原本只有随机访问迭代器才有的访问额能力：前进或后退多个元素，以及处理迭代器之间的距离。第三个辅助函数允许用户交换两个迭代器的值。
// 1）advance() 函数可以将迭代器的位置增加，郑家的幅度由参数决定，也就是说使迭代器一次前进或后退多个元素。它的调用语法规则使：void advance(InputIterator& pos, Dist n);
// 该函数使输入型迭代器前进n个元素，对于双向或随机访问迭代器，n可以取负值，表示向后访问。
// 2）distance() 函数可以处理迭代器之间的距离，其函数原型为：
// dist distance（InputIterator pos1， InputIterator pos2）；
// 该函数传回两个输入迭代器pos1，pos2之间的距离，两个迭代器必须指向同一个容器。
// 如果不是随机访问迭代器，则从pos1开始往前走必须能够到达pos2，即pos2的位置必须与pos1相同或在后。
// 3）iter_swap() 可以交换两个迭代器指向的元素值。
// void iter_swap(ForwardIterator1 pos1, ForwardIterator2 pso2)
// 该函数用于交换迭代器pos1 和 pos2 所指向的元素值，迭代器的类型不必相同，但是所指向的两个值必须可以相互赋值。

// 用三个迭代器辅助函数来操作列表容器中的元素。

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  int A[] = { 1,2,3,4,5 };
  const int N = sizeof(A) / sizeof(int);
  list<int> col1(A, A + N);
  ostream_iterator<int> output(cout, " ");
  cout << "List col1 contains: ";
  copy(col1.begin(), col1.end(), output);  // 输出初始列表容器col1中的元素
  
  list<int>::iterator pos = col1.begin();  // 定义指向初始元素的迭代器
  cout << "\nThe first element is: " << *pos;  // 输出第一个元素

  advance(pos, 3);  // 前进三个元素，指向第四个元素
  cout << "\nThe 4th element is: " << *pos;  // 输出第四个元素。

  cout << "\nThe advanced distance is: " << distance(col1.begin(), pos);  // 输出当前迭代器位置与初始位置的距离。

  iter_swap(col1.begin(), --col1.end());  // 交换列表容器中第一个元素和最后一个元素。
  cout << "\nAfter exchange List col1 contains: ";
  copy(col1.begin(), col1.end(), output); // 输出交换元素后列表容器col1中的元素。
  cout << endl;
}

//List col1 contains : 1 2 3 4 5
//The first element is : 1
//The 4th element is : 4
//The advanced distance is : 3
//After exchange List col1 contains : 5 2 3 4 10.
