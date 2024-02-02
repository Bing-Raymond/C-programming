#pragma once
// 设计一个字符串类MyString，具有构造函数，析构函数，拷贝构造函数，重载运算符+，=，+=，[],尽可能地完善它，使之能满足各种需要。

// 时间来不急了。我要赶紧弄完第6章，回来再看都可以！

class MyString
{
public:
  MyString();
  MyString(const char* const);
  MyString(const MyString&);
  ~MyString();
  char& operator[](unsigned short offset);
  char operator[] (unsigned short offset) const;
  MyString operator+(const MyString&);
  void operator+= (const MyString&);
  MyString& operator = (const MyString&);

  unsigned short getLen() const { return itsLen; }
  const char* getMyString() const { return itsMyString; }

private:
  MyString(unsigned short);
  char* itsMyString;
  unsigned short itsLen;
};