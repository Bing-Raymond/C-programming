#pragma once
// 声明类X,Y,Z,函数h(x*),满足：类X有私有成员i，Y的成员函数g（X*)是X的友元函数，实现对X的成员i加1，类Z是类X的友元类，其成员函数f（X*）实现对X的成员i加5；函数h（X*）是X的友元函数，实现对X的成员i加10.
// 在一个文件中声明和实现类，在另一个文件中实现mian()函数。

// 学习：
// 1，在类X中声明Y的成员函数为友元时，此时类Y还没有定义。第一行的class Y，仅作为声明告诉编译器有这个类，而不知道这个类究竟包含了什么。所以在类X中声明成员函数g()为友元的语句无效
// 2，在类Y中定义g()函数时，编译器并不知道g()作为了类X的友元，因为此时类X还没有定义，而只是在第一行作了声明
// 3，各种类的声明要有顺序！！！



class X;       // 告诉后面的Y，X是一个类。因为Y类里，依赖了X类。但，前向声明，只能告诉Y，X是个类。所以，Y类里不能对X的成员进行操作，只能放在X类声明的后面统一实现。
class Y
{
public:
  void g(X* x);
};

class X
{
private:
  int i;
public:
  X() { i = 0; std::cout << "i " << i << std::endl; }
  friend void h(X*);
  friend void Y::g(X*);   // 声明了，但是拿不到X的私有。需要把X类的声明放在Y类的前面，就可以了！！！ 否则，X类不知道Y类里有什么，声明了也没有用！
  friend class Z;
  void show() const;
};

class Z
{
public:
  void f(X* x)
  {
    x->i += 5;
  }
};

void h(X* x)
{
  x->i =+ 10;
}

void X::show() const
{
  std::cout << "i: " << i << std::endl;
}

void Y::g(X* x)
{
  x->i =+1;
}