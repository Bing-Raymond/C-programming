#include "Header.h"     

Mammal::Mammal() :itsAge(1), itsWeight(5)
{

  cout << "Mammal constructor... \n";

}

Mammal::~Mammal()
{
  cout << "Mammal destructor... \n";
}

Dog::Dog() :itsColor(WHITE)
{

  cout << "Dog constructor... \n";
}

Dog::~Dog()
{
  cout << "Dog destructor... \n";
}


int main()
{
  Dog jack;
  jack.speak();
  jack.wagTail();
  cout << "jack is " << jack.getColor() << " age: " << jack.getAge() << endl;

  return 0;
}

/*
Mammal constructor...
Dog constructor...
Mammal sound!
Tail wagging...
jack is 1 age: 1
Dog destructor...
Mammal destructor...

*/