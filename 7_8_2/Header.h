// ����һ��Document�࣬�����ݳ�Աname,��Document������Book�࣬�������ݳ�ԱPageCount
// ѧϰ��
// Book::Book(char * name, int page) : Document(name), pageCount(page)
// �������ֳ�ʼ��Book��������֣��õ�ʱDocument(name) �Ĺ��캯����

// ��ӡ���Ƶķ���Ҳ�ǵ��õĻ���ķ����� 


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