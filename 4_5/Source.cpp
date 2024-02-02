// 声明一个CPU类，包含等级rank、频率frequency、电压voltage等属性，有两个共有成员函数run、stop。其中，rank为枚举类型CPU_Rank，声明为enum CPU_Rank{P1 = 1, P2,P3,P4,P5,P6,P7};
// frequency 为单位是MHz的整型数，voltage为浮点型的电压值。观察构造函数和析构函数的调用顺序。

#include "Header.h"

int main()
{
  CPU myCpu(P4, 3.1, 4.5);
  myCpu.run();
  myCpu.stop();
}