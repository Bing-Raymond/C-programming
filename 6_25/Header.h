#pragma once
// ���һ���ַ�����MyString�����й��캯���������������������캯�������������+��=��+=��[],�����ܵ���������ʹ֮�����������Ҫ��

// ʱ���������ˡ���Ҫ�Ͻ�Ū���6�£������ٿ������ԣ�

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