#include "Header.h"
int main()
{
  Shape *sp;  // 基类指针  只能call到基类对外的接口方法！
  sp = new Circle(5);

  cout << "The area of the Circle is : " << sp->getArea() << endl;  // 但是，当基类指针指向子类对象时，call的却是子类里的定义的方法！
  cout << "The length of the Circle is : "<< sp->getLength() << endl;  // 当子类对象没有实现虚函数的时候，就会调用到基类的这个函数！
  delete sp;

  sp = new Rectangle(4, 6);   // 指向子类对象
  cout << "The area of Rectangle is : " << sp->getArea() << endl;  // 调用的是谁的getArea呢？是子类对象的getArea
  delete sp;

  sp = new Square(5);
  cout << "The area of Square is : " << sp->getArea() << endl;
  // cout << "The length of Square is : " << sp->getLength() // 无法call到基类的getLength方法。为什么？在基类里加上getLength就可以调用到getLength了。
  
  
  cout << "The length is : " << sp->getLength() << endl;
  delete sp;

  
}


/*
总结：Shape* sp，这是一个基类的指针，所以，只有基类里public的方法才能call到。如果想要在子类对象里call基类的方法，就要添加对外接口。
然后，当基类指针指向子类对象时，就会call到子类的相应方法，而不是基类的返回-1的方法。所以，一定要用虚函数！
调用方式：通过基类指针或引用，执行时会根据指针指向的对象的类，决定调用哪个函数。
*/