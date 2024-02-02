#include "Header.h"
// 初始化HowManyCats
int Cat::HowManyCats = 0;
void telepathicFunction();
int main()
{
  const int MaxCats = 5;
  // 牛逼plus 下面怎么解释？
  Cat *catHouse[MaxCats];
  int i = 0;
  for (i = 0; i < MaxCats; i++)
  {
    // 建立对象。
    catHouse[i] = new Cat(i);
    telepathicFunction();
  }

  for (i = 0; i < MaxCats; i++)
  {
    // 删除对象！
    delete catHouse[i];
    telepathicFunction();
  }
}

void telepathicFunction()
{
  cout << "get how many cats: " << Cat::getHowManyCats() << endl;
}