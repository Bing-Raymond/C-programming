// deque() 双端队列是一个放松了访问权限的队列。在双端队列容器中，元素可以从队列的两端入队和出队。除了可以从队列的首部和尾部访问元素外，标准的双端队列也支持通过使用小标操作符“[]”进行直接访问。
// 使用双端队列容器保存双精度数值序列。
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
  deque<double> values;
  ostream_iterator<double> output(cout, " ");
  values.push_front(2.2);
  values.push_front(3.5);
  values.push_back(1.1);
  cout << "values contains: ";
  for (int i = 0; i < values.size(); ++i)
  {
    cout << values[i] << ' ';
  }
  values.pop_front();
  cout << "\nAfter pop_front values contains: ";
  copy(values.begin(), values.end(), output);
  values[1] = 5.4;
  cout << "\nAfter values[1] = 5.4 values contains:  ";
  copy(values.begin(), values.end(), output);
  cout << endl;
}

//values contains : 3.5 2.2 1.1
//After pop_front values contains : 2.2 1.1
//After values[1] = 5.4 values contains : 2.2 5.4