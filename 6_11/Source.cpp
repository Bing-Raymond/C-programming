// ����ָ��ʵ��
#include <iostream>
using namespace std;
// һ������
void print_stuff(float data_to_ignore);
void print_message(float list_this_data);
void print_float(float data_to_print);
// һ������ָ�룬����һ������ʱ��ҲҪ˵��������
// ����ֵ �� ��ʽ���� �б�
void(*function_pointer)(float);
// �Ա�һ�¡�
void function2(float a, float b);
// �β��б�Ҫ�г�����
void(*function_pointer2)(float, float);

int main()
{
  float pi = (float) 3.14159;
  float two_pi = (float)2.0*pi;
  print_stuff(pi);
  // ��print_stuff ����������ָ�롣
  function_pointer = print_stuff;
  // ֱ��ʹ�ú�����ָ����õ��Ǹ�������
  function_pointer(pi);
  // ��print_message ����������ָ�롣
  function_pointer = print_message;
  // ʹ�ú���ָ�룬���õ�print_message������
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