// ��д4�����غ���Double(x)������ֵΪ����������������������ͷֱ���int��long,float,double,�������ƺ�����һ����
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