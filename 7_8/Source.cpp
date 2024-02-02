#include "Header.h"
int main()
{
  D1 d1;
  d1.nV = 2;       // 使用了虚基，可以直接.出来这个nV。
  d1.fun();
  
  D2 d2;
  // d2.nV = 2;    // 不使用虚基类，需要d2.B0::nV; 
}