#include "Header.h"
Document::Document(char* name)
{
  itsName = new char[strlen(name) + 1];
  strcpy_s(itsName, strlen(itsName),name);
}

void Document::printNameOf() const
{
  cout << "Name: " << itsName << endl;
}


Book::Book(char * name, int page) : Document(name), pageCount(page)
{
}

void Book::printNameOf()
{
  cout << "Book Name: " << endl;
  Document::printNameOf();
  cout << "Book page: " << pageCount << endl;
}                                     