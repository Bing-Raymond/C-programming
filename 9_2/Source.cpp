// 9_2.cpp
// 实现一个任意类型存储的类模板store，然后通过具体数据类型参数对类模板进行实例化，生成类，然后类再被实例化生成对象S1、S2、S3 和D。
// 不过类模板的实例化过程，在程序中是隐藏的，为了在UML图中表示方便，这里暂且给由模板实例化生成的类取名为intStore， doubleStore，StudentStore，
// 只是这些类名在程序中并不出现。
// 这个其实和标准库里的容器是一个意思，看不懂是因为那些标准库不会用！当然，模板算法也是一个意思，比如double和int的加法。。

#include <iostream>
#include <cstdlib>
using namespace std;

struct Student                                             // 结构体
{
  int id;                                                  // 学号
  float gpa;                                               // 平均分
};

template <class T>                                         // 类模板：实现对任意类型数据进行存取
class Store
{
private:
  T item;                                                  // item用于存放任意类型的数据
  int haveValue;                                           // haveValue标记item是否已被存入内容
public:
  Store(void);                                             // 默认形式（无形参）的构造函数
  
  T GetElem(void);                                         // 提取数据函数
  void PutElem(T x);                                       // 存入数据函数
};

template <class T>                                        // 默认形式构造函数的实现
Store<T> ::Store(void) :haveValue(0)
{}

template <class T>                                        // 提取数据的实现
T Store<T>::GetElem(void)
{
  if (haveValue == 0)                                     // 如果试图提取未初始化的数据，则终止程序
  {
    cout << "No item present!" << endl;                  
    exit(1);                                              // 使程序完全退出，返回到操作系统，参数可用来表示程序终止的原因，可以被操作系统接收
  }
  return item;                                            // 返回item存放的数据
}

template <class T>                                        // 存入数据函数的是实现
void Store<T>::PutElem(T x)
{
  haveValue++;                                            // 将haveValue置为True；
  item = x;                                               // 将x存入item
}

int main()
{
  Student g = { 1000, 23 };                                // 声明Student类型结构体变量的同时赋以初值
  Store<int> S1, S2;                                       // 声明Store<int>类对象S1，S2，其中数据成员item为int类型
  Store<Student> S3;                                       // 声明Store<Student>类对象S3，其中数据成员item为Student类型

  Store<double> D;                                         // 声明Store<double>类对象D, 其中数据成员item为double类型
  S1.PutElem(3);                                           // 向对象S1中出入数据（初始化对象S1）
  S2.PutElem(-7);                                          // 向对象S2中存入数据（初始化对象S2）
  cout << S1.GetElem() << " " << S2.GetElem() << endl;     // 输出S1和S2的数据成员
  S3.PutElem(g);                                           // 向对象D中存入数据（初始化对象D)
  cout << "The student id is " << S3.GetElem().id << endl; // 输出对象S3 的数据成员
  cout << "Retrieving object D  ";
  cout << D.GetElem() << endl;    // 输出D的数据成员
  // 由于D未经初始化，在执行函数D.GetElem()过程中导致程序终止。
  return 0;
}