#include "Header.h"
int main()
{
  Base* b = new Derived();
  fun(b);
}

/*
 Base destructor
*/

/*
���н��2
������������޸�Ϊ����������
Derived destructor
Base destructor
*/