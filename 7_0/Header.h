#pragma once
// 开始第7章！
// 继承与派生。
// 派生类就是继承了基类的类。
// 还是习惯类名第一个字母大写。

class employee
{
protected:
  char name[20];
  int individualEmpNo;
  int grade;
  float accumPay;
  static int employeeNo;

public:
  employee();               // 构造函数
  ~employee();                        // 析构函数
  void pay();                                   // 计算月薪函数
  void promote(int);                            // 升职函数
  void setName(char*);
  char* getName();
  int getIndividualEmpNo();
  int getGrade();
  float getAccumPay();
};

class techniciam:public employee  // 兼职技术人员类，继承了employee 基类。
{
private:
  float hourlyRate;
  int workHours;
public:
  techniciam();                    // 构造函数。
  void setWorkHours(int wh);
  void pay();
};