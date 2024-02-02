#include "Header.h"
void Learn::setName(char* name)
{
  strncpy_s(this->name,name, sizeof(this->name));
}

void Learn::setStrName()
{
  this->strName = "KongRan";
}

void Learn::show()
{
  std::cout << this->name << std::endl;
  std::cout << this->strName << std::endl;
}

int main(int* agi, char* agc) 
{
  Learn myLearn;
  char myName[10];
  strncpy_s(myName, "LeiBing",sizeof(myName));
  myLearn.setName(myName);
  myLearn.setStrName();
  myLearn.show();
}