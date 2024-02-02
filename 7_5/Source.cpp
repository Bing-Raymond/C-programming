#include "Header.h"
int main()
{
  C obj(1, 2, 3, 4);
}

/*
// 构造函数
constructing B2 2
constructing B1 1
constructing B3 *
constructing B1 3
constructing B2 4
constructing B3 *
// 析构函数，与构建函数顺序相反。
destructing B3 *
destructing B2
destructing B1
destructing B3 *
destructing B1
destructing B2
*/