// ����һ��CPU�࣬�����ȼ�rank��Ƶ��frequency����ѹvoltage�����ԣ����������г�Ա����run��stop�����У�rankΪö������CPU_Rank������Ϊenum CPU_Rank{P1 = 1, P2,P3,P4,P5,P6,P7};
// frequency Ϊ��λ��MHz����������voltageΪ�����͵ĵ�ѹֵ���۲칹�캯�������������ĵ���˳��

#include "Header.h"

int main()
{
  CPU myCpu(P4, 3.1, 4.5);
  myCpu.run();
  myCpu.stop();
}