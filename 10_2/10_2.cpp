// deque() ˫�˶�����һ�������˷���Ȩ�޵Ķ��С���˫�˶��������У�Ԫ�ؿ��ԴӶ��е�������Ӻͳ��ӡ����˿��ԴӶ��е��ײ���β������Ԫ���⣬��׼��˫�˶���Ҳ֧��ͨ��ʹ��С���������[]������ֱ�ӷ��ʡ�
// ʹ��˫�˶�����������˫������ֵ���С�
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