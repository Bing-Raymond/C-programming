#pragma once
// ��ʼ��7�£�
// �̳���������
// ��������Ǽ̳��˻�����ࡣ
// ����ϰ��������һ����ĸ��д��

class employee
{
protected:
  char name[20];
  int individualEmpNo;
  int grade;
  float accumPay;
  static int employeeNo;

public:
  employee();               // ���캯��
  ~employee();                        // ��������
  void pay();                                   // ������н����
  void promote(int);                            // ��ְ����
  void setName(char*);
  char* getName();
  int getIndividualEmpNo();
  int getGrade();
  float getAccumPay();
};

class techniciam:public employee  // ��ְ������Ա�࣬�̳���employee ���ࡣ
{
private:
  float hourlyRate;
  int workHours;
public:
  techniciam();                    // ���캯����
  void setWorkHours(int wh);
  void pay();
};