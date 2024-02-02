// 编写4个重载函数Double(x)，返回值为输入参数的两倍；参数类型分别有int，long,float,double,返沪机制和类型一样。
#pragma once
#include <iostream>
using namespace std;
int Double(int);
long Double(long);
float Double(float);
double Double(double);

int Double(int i)
{
  return 2 * i;
}

long Double(long l)
{
  return 2 * l;
}

float Double(float f)
{
  return 2 * f;
}

double Double(double d)
{
  return 2 * d;
}