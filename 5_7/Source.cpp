#include "Header.h"
// ��ʼ��HowManyCats
int Cat::HowManyCats = 0;
void telepathicFunction();
int main()
{
  const int MaxCats = 5;
  // ţ��plus ������ô���ͣ�
  Cat *catHouse[MaxCats];
  int i = 0;
  for (i = 0; i < MaxCats; i++)
  {
    // ��������
    catHouse[i] = new Cat(i);
    telepathicFunction();
  }

  for (i = 0; i < MaxCats; i++)
  {
    // ɾ������
    delete catHouse[i];
    telepathicFunction();
  }
}

void telepathicFunction()
{
  cout << "get how many cats: " << Cat::getHowManyCats() << endl;
}