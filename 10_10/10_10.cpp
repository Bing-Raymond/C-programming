// 可变序列算法
// mutating algorithm 可以修改他们所操作的容器的元素。
// 操作包括复制(copy),生成（generate),删除（remove），替换（replace），倒序（reverse),旋转（rotate),交换（swap)和变换（transform),分割（partition），剔除（unique),填充（fill），洗牌（shuffle）
// copy 复制区间所有元素
// copy_n 复制区间中前n个元素
// copy_backward 逆向复制区间中的元素
// fill 用某一数值替换区间中的所有元素
// fill_n 用某一数值替换区间中的前n个元素
// generate 连续调用函数对象，计算区间中元素的函数值，然后一次替换掉区间中的相应元素
// generate_n 连续调用函数对象，计算区间中元素的函数值，然后一次替换掉区间中的相应元素
// partition 将满足函数对象关系的元素放置在不满足函数对象关系的元素之前，从而重新排列区间中元素
// stable_partition 将满足函数对象关系的元素放置在不满足函数对象关系的元素之前，从而重新排列区间中元素，并保持元素的相对次序
// unique 查找并删除区间中连续相等的元素，使成为惟一
// unique_copy 查找并删除区间中连续相等的元素，使成为惟一，并复制到别处
// random_shuffle 随机重排区间元素
// remove 删除区间中所有等于某数值的元素
// remove_if 删除区间中所有满足某条件的元素
// remove_copy 删除某类元素并将结果复制到另一个容器
// remove_copy_if 有条件地删除某类元素，并将结果复制到另一个容器
// replace 替换某类元素
// replace_copy_if 有条件地替换某类元素，并将结果复制到另一个容器中
// reverse 反转区间元素次序
// reverse_copy 反转区间元素次序，并将结果复制到另一个容器
// rotate 旋转交替排列区间元素
// rotate_copy 反转区间元素次序，并将结果复制到另一个容器
// swap 交换（对调）元素
// iter_swap 元素互换
// swap_ranges 交换两个区间中的元素
// transform 以一个序列为基础，通过函数对象产生第二个序列，或以两个序列为基础，通过函数对象产生第三个序列

// 以可变序列算法对数据序列进行复制、生成、删除、替换、倒序、旋转等可变性操作。

#include <iostream>
#include <algorithm>  // 方法都在这里面。
#include <functional>
#include <vector>
using namespace std;
class even_by_two  // 类定义形式的函数对象
{
public:
  int operator()()const { return _x += 2; }

private:
  static int _x;
};

int even_by_two::_x = 0;  // 静态数据成员初始化

int main()
{
  int iarray[] = { 0,1,2,3,4,5,6,6,6,7,8 };
  int iarray1[] = { 0,1,2,3,4,4,5,5,6,6,6,6,6,7,8 };
  vector<int> ivector(iarray, iarray + sizeof(iarray)/sizeof(int));
  vector<int> ivector1(iarray + 6, iarray + 8);
  vector<int> ivector2(iarray1, iarray1 + sizeof(iarray1) / sizeof(int));
  ostream_iterator<int> output(cout, " ");  // 定义流迭代器用于输出数据

  // 迭代遍历ivector1区间，对每一个元素进行even_by_two 操作
  generate(ivector1.begin(), ivector1.end(), even_by_two());  
  copy(ivector1.begin(), ivector1.end(), output);
  cout << endl;

  // 迭代遍历ivector的指定区间（起点和长度），对每一个元素进行even_by_two操作
  generate_n(ivector.begin(), 3, even_by_two());
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 删除元素6
  remove(ivector.begin(), ivector.end(), 6);
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 删除（实际并未从元素列中删除）元素6，结果至于另一区间
  vector<int> ivector3(12);
  remove_copy(ivector.begin(), ivector.end(), ivector3.begin(), 6);
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;

  // 删除（实际并未从原序列中删除）小于6的元素
  remove_if(ivector.begin(), ivector.end(), bind2nd(less<int>(), 6));
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 删除（实际并未从原序列中删除）小于7的元素，结果置于另一个区间
  remove_copy_if(ivector.begin(), ivector.end(), ivector3.begin(), bind2nd(less<int>(), 7));
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;

  // 将所有的元素值6改为元素值3
  replace(ivector.begin(), ivector.end(), 6, 3);
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 将所有的元素值3改为元素值5，结果放置到另一个区间
  replace_copy(ivector.begin(), ivector.end(), ivector3.begin(), 3, 5);
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;

  // 将所有小于5的元素值改为元素值2
  replace_if(ivector.begin(), ivector.end(), bind2nd(less<int>(), 5), 2);
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 将所有的元素值8改为元素值9，结果放置到另一个区间
  replace_copy_if(ivector.begin(), ivector.end(), ivector3.begin(), bind2nd(equal_to<int>(), 8), 9);
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;

  // 逆向重排每一个元素
  reverse(ivector.begin(), ivector.end());
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 逆向重拍每一个元素，结果放置于另一个区间
  reverse_copy(ivector.begin(), ivector.end(), ivector3.begin());
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;

  // 旋转（互换元素）[first, middle)和[middle, end]
  rotate(ivector.begin(), ivector.begin() + 4, ivector.end());
  copy(ivector.begin(), ivector.end(), output);
  cout << endl;

  // 旋转（互换元素）[first, middle]和[middle, end]，结果放置于另一个区间
  rotate_copy(ivector.begin(), ivector.begin() + 5, ivector.end(), ivector3.begin());
  copy(ivector3.begin(), ivector3.end(), output);
  cout << endl;
}

