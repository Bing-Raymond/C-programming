#include "Header.h"
int main()
{
  Clock myClock(23, 59, 59);
  cout << "First time output: ";
  myClock.showTime();
  cout << "Show myClock++: ";
  (myClock++).showTime();
  cout << "Show ++myClock: ";
  (++myClock).showTime();

}