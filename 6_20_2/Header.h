#pragma once
// Ҫ��ʵ��һ����ΪSimpleCircle �ļ�Բ�࣬�����ݳ�Աint* itsRadiusΪһ��ָ��뾶ֵ��ָ�룬��ƶ����ݳ�Ա�ĸ��ֲ������������������ʵ�ֲ���������ࡣ
// ��һ��Ҫ�еĲ�����
// ���캯�����в�����û������
// ����������
// ���ƹ��캯������Ҫconst
// get��set������get��Ҫconst��
// �����Ҫ��ס����дȫ��

// ����д�����ܺá�Ҫѧϰ��


class SimpleCircle
{
public:
  SimpleCircle();
  SimpleCircle(int rad);
  SimpleCircle(const SimpleCircle&);
  ~SimpleCircle() {} // �����д����š�
  int getRadius() const;
  void setRadius(int rad);
private:
  int* itsRadius;

};