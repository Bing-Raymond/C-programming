// 全选主元高斯消去法解线性方程组！
// 关键是矩阵运算。
// 定义一个矩阵类Matrix作为基类。然后由矩阵类派生出线性方程组类，Linequ
// 矩阵类Matrix只处理nxn型的方阵，方阵用一个一维数组来存放，矩阵类Matrix的数据成员包括数组的首地址和n，矩阵类Matrix的功能由设置矩阵的值setMatrix和显示矩阵printM()等
// 线性方程组类Linequ的数据除了由矩阵类Matrix继承过来用于存放系数矩阵A的成员之外，还应该包括存放解向量x和方程右端b的数组的首地址。
// 线性方程组类Linequ的主要操作由方程组设置setLinqu()，显示printL()，求解solve()及输出方程的解showX()
// 在线性方程组类Linequ的成员函数Solve中需要访问基类矩阵类Matrix的数据成员，我们利用公有继承方式派生，同事将Matrix类中的数据成员的访问控制设置为保护类型。这样，经过公有派生之后，基类的保护成员在派生类中依然是保护成员，可以被派生类的成员函数访问。

// 算法可以慢慢理解，但是这个程序的设计方法要学！就这几行就搞定了。

#pragma once

#include <iostream>
#include <cmath>
using namespace std;
class Matrix                                  // 基类Matrix声明
{
public:                                       // 外部接口
  Matrix(int dims = 2);                       // 构造函数
  ~Matrix();                                  // 析构函数
  void setMatrix(double* rmatr);              // 矩阵赋初值
  void printM() const;                        // 显示矩阵
protected:                                    // 保护数据成员
  int index;                                  // 矩阵的维数
  double* MatrixA;                            // 矩阵存放数组首地址
};

class Linequ :public Matrix                   // 公有派生类Linequ声明
{
public:                                       // 外部接口
  Linequ(int dims = 2);                       // 构造函数
  ~Linequ();                                  // 析构函数
  void setLinequ(double* a, double* b);       // 方程赋值
  void printL() const;                        // 显示方程
  int Solve();                                // 全选主元高斯消去法求解方程
  void showX() const;                         // 显示方程的解

private:                                      // 私有数据
  double* sums;                               // 方程右端项
  double* solu;                               // 方程的解
};