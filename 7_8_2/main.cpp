#include "Header.h"
int main()
{
  char docName[] = "�ĵ�����";
  Document a(docName);
  a.printNameOf();
  char bookName[] = "׷���ݵ���";
  Book myBook(bookName, 100);
  myBook.printNameOf();


}