#include "..\9_8\9_8.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;
enum Boolean
{
  False,
  True
};

class Calculator       // ��������
{
private:
  Stack<int> S;            // ������ջ
  void Enter(int num);     // ��������numѹ��ջ
  //
  Boolean GetTwoOperands(int& opnd1, int& opnd2);   // ��������������������ջ������opnd1��opnd2 �С�
  void Compute(char op);                            // ִ���ɲ�����opָ��������
public:
  Calculator(void);                                 // ���캯��
  void Run(void);                                   // ���м���������
  void Clear(void);                                 // ��ղ�����ջ
};

void Calculator::Enter(int num)                     // ��������numѹ��ջ
{
  S.Push(num);
}

// ����������������ջ������opnd1��opnd2��
// ���ջ��û���������������򷵻�False����������Ϣ
Boolean Calculator::GetTwoOperands(int& opnd1, int& opnd2)
{
  if (S.StackEmpty())                               // ���ջ�Ƿ��
  {
    cerr << "Missing operand!" << endl;
    return False;
  }
  opnd1 = S.Pop();                                  // ���Ҳ���������ջ
  if (S.StackEmpty())                               // ���ջ�Ƿ��
  {
    cerr << "Missing operand!" << endl;

    return False;
  }

  opnd2 = S.Pop();                                  // ��������������ջ
  return True;
}

void Calculator::Compute(char op)                   // ִ������
{
  Boolean result;
  int operand1, operand2;
  
  result = GetTwoOperands(operand1, operand2);      // ����������������ջ

  if (result == True)                               // ����ɹ���ִ�����㲢�����ѹ��ջ
  {
    switch (op)
    {
    case '+': S.Push(operand2 + operand1);
      break;
    case '-': S.Push(operand2 - operand1);
      break;
    case '*': S.Push(operand2 * operand1);
      break;
    case '/': if (operand1 == 0)
    {
      cerr << "Divide by 0!" << endl;
      S.ClearStack();
    }
              else
    {
      S.Push(operand2 / operand1);
    }
              break;
    case '^': S.Push(pow(operand2, operand1));
      break;
    }
    cout << '=' << S.Peek() << ' ';                 // �������������

  }
  else
    S.ClearStack();                                 // ���������������ջ
}

Calculator::Calculator(void)                        // ���캯��
{}

void Calculator::Run(void)                          // ���벢�����׺���ʽ
{
  char c[20];
  while(cin >>c, *c != 'q')                         // ������ʽ��������q������
    switch (*c)
    {
    case 'c': S.ClearStack();
      break;
    case '-':                                       // ������-����Ҫ�ж�ʱ���Ż��Ǹ���
      if (strlen(c) > 1)                            // ���ַ�������>1��˵���������Ǹ����ĸ���
        Enter(atoi(c));                             // ���ַ���ת����������ѹ��ջ
      else
        Compute(*c);                                // ���Ǽ�����ִ�м���
      break;
    case '+':                                       // ����������������ʱ
    case '*':
    case '/':
    case '^':
      Compute(*c);                                  // ִ�м���
      break;
    default:                                        // ��������ǲ�������ת��Ϊ���ͺ�ѹ��ջ
      Enter(atoi(c));
      break;
    }
}

void Calculator::Clear(void)                        // ��ղ�����ջ
{
  S.ClearStack();
}