// 函数指针实例
#include <iostream>
using namespace std;
// 一个函数
void print_stuff(float data_to_ignore);
void print_message(float list_this_data);
void print_float(float data_to_print);
// 一个函数指针，声明一个函数时，也要说明函数的
// 返回值 和 形式参数 列表。
void(*function_pointer)(float);
// 对比一下。
void function2(float a, float b);
// 形参列表要列出来。
void(*function_pointer2)(float, float);

int main()
{
  float pi = (float) 3.14159;
  float two_pi = (float)2.0*pi;
  print_stuff(pi);
  // 将print_stuff 函数给函数指针。
  function_pointer = print_stuff;
  // 直接使用函数的指针调用到那个函数。
  function_pointer(pi);
  // 将print_message 函数给函数指针。
  function_pointer = print_message;
  // 使用函数指针，调用到print_message函数。
  function_pointer(two_pi);
  function_pointer(13.0);
  function_pointer = print_float;
  function_pointer(pi);
  print_float(pi);
  function_pointer2 = function2;
  function_pointer2(11.1, 22.2);
}

void print_stuff(float data_to_ignore)
{
  cout << "This is the print stuff function. \n";
}

void print_message(float list_this_data)
{
  cout << "The data to be listed is " << list_this_data << endl;
}

void print_float(float data_to_print)
{
  cout << "The data to be printed is " << data_to_print << endl;
}

void function2(float a, float b)
{
  cout << "This is the function2. a " << a << " b " << b << endl;
}