#pragma once
// 类的派生
// 保护成员的访问。
class A
{
protected:
  int x;
};

// 创建B类，公有继承A
class B :public A
{
public:
  void function();
};

// B类的公有方法可以直接使用A类的保护成员！
void B::function()
{
  x = 5;
}