// ȫѡ��Ԫ��˹��ȥ�������Է����飡
// �ؼ��Ǿ������㡣
// ����һ��������Matrix��Ϊ���ࡣȻ���ɾ��������������Է������࣬Linequ
// ������Matrixֻ����nxn�͵ķ��󣬷�����һ��һά��������ţ�������Matrix�����ݳ�Ա����������׵�ַ��n��������Matrix�Ĺ��������þ����ֵsetMatrix����ʾ����printM()��
// ���Է�������Linequ�����ݳ����ɾ�����Matrix�̳й������ڴ��ϵ������A�ĳ�Ա֮�⣬��Ӧ�ð�����Ž�����x�ͷ����Ҷ�b��������׵�ַ��
// ���Է�������Linequ����Ҫ�����ɷ���������setLinqu()����ʾprintL()�����solve()��������̵Ľ�showX()
// �����Է�������Linequ�ĳ�Ա����Solve����Ҫ���ʻ��������Matrix�����ݳ�Ա���������ù��м̳з�ʽ������ͬ�½�Matrix���е����ݳ�Ա�ķ��ʿ�������Ϊ�������͡�������������������֮�󣬻���ı�����Ա������������Ȼ�Ǳ�����Ա�����Ա�������ĳ�Ա�������ʡ�

// �㷨����������⣬��������������Ʒ���Ҫѧ�����⼸�о͸㶨�ˡ�

#pragma once

#include <iostream>
#include <cmath>
using namespace std;
class Matrix                                  // ����Matrix����
{
public:                                       // �ⲿ�ӿ�
  Matrix(int dims = 2);                       // ���캯��
  ~Matrix();                                  // ��������
  void setMatrix(double* rmatr);              // ���󸳳�ֵ
  void printM() const;                        // ��ʾ����
protected:                                    // �������ݳ�Ա
  int index;                                  // �����ά��
  double* MatrixA;                            // �����������׵�ַ
};

class Linequ :public Matrix                   // ����������Linequ����
{
public:                                       // �ⲿ�ӿ�
  Linequ(int dims = 2);                       // ���캯��
  ~Linequ();                                  // ��������
  void setLinequ(double* a, double* b);       // ���̸�ֵ
  void printL() const;                        // ��ʾ����
  int Solve();                                // ȫѡ��Ԫ��˹��ȥ����ⷽ��
  void showX() const;                         // ��ʾ���̵Ľ�

private:                                      // ˽������
  double* sums;                               // �����Ҷ���
  double* solu;                               // ���̵Ľ�
};