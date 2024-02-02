// 声明一个Document类，由数据成员name,从Document派生出Book类，增加数据成员PageCount
// 学习：
// Book::Book(char * name, int page) : Document(name), pageCount(page)
// 上面这种初始化Book对象的名字，用的时Document(name) 的构造函数！

// 打印名称的方法也是调用的基类的方法！ 


#pragma once
#include <iostream>
using namespace std;
class Document
{
public:
  char* itsName;
  Document() {}
  ~Document() {}
  Document(char* name);

  void printNameOf()const;
};

class Book :public Document
{
public:
  Book(char* name, int page);
  int getPageCount()const { return pageCount; };
  void setPageCount(int page) { pageCount = page; }
  void printNameOf();
private:
  int pageCount;

};