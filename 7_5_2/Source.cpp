#include "Header.h"
int main()
{
  Shape *sp;  // ����ָ��  ֻ��call���������Ľӿڷ�����
  sp = new Circle(5);

  cout << "The area of the Circle is : " << sp->getArea() << endl;  // ���ǣ�������ָ��ָ���������ʱ��call��ȴ��������Ķ���ķ�����
  cout << "The length of the Circle is : "<< sp->getLength() << endl;  // ���������û��ʵ���麯����ʱ�򣬾ͻ���õ���������������
  delete sp;

  sp = new Rectangle(4, 6);   // ָ���������
  cout << "The area of Rectangle is : " << sp->getArea() << endl;  // ���õ���˭��getArea�أ�����������getArea
  delete sp;

  sp = new Square(5);
  cout << "The area of Square is : " << sp->getArea() << endl;
  // cout << "The length of Square is : " << sp->getLength() // �޷�call�������getLength������Ϊʲô���ڻ��������getLength�Ϳ��Ե��õ�getLength�ˡ�
  
  
  cout << "The length is : " << sp->getLength() << endl;
  delete sp;

  
}


/*
�ܽ᣺Shape* sp������һ�������ָ�룬���ԣ�ֻ�л�����public�ķ�������call���������Ҫ�����������call����ķ�������Ҫ��Ӷ���ӿڡ�
Ȼ�󣬵�����ָ��ָ���������ʱ���ͻ�call���������Ӧ�����������ǻ���ķ���-1�ķ��������ԣ�һ��Ҫ���麯����
���÷�ʽ��ͨ������ָ������ã�ִ��ʱ�����ָ��ָ��Ķ�����࣬���������ĸ�������
*/