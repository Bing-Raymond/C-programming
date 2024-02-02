#include "Header.h"
int main()
{
  char docName[] = "文档名称";
  Document a(docName);
  a.printNameOf();
  char bookName[] = "追风筝的人";
  Book myBook(bookName, 100);
  myBook.printNameOf();


}