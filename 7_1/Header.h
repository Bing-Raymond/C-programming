#pragma once
// �� 7-1 Point �๫�м̳�
// ���м̳л�����࣬����ֱ��ʹ�û���Ĺ��з�����
class Point
{
public:
  void initP(float xx = 0, float yy = 0) { X = xx; Y = yy; }
  void move(float xOff, float yOff) { X += xOff; Y += yOff; }
  float getX() const { return X; }
  float getY() const { return Y; }
private:
  float X, Y;
};

class Rectangle :public Point   // �������������֣����м̳л��ࡣ
{
public:
  void initR(float x, float y, float w, float h)
  {
    initP(x, y);   // ���û��۵Ĺ��캯�����������Է�װ����Point
    W = w;
    H = h;
  }

  float getH()const { return H; }
  float getW()const { return W; }

private:
  float W, H;                // ����˽�г�Ա��
};