#pragma once
#include <iostream>
using namespace std;

enum CPU_Rank
{
  P1 = 1,
  P2,
  P3,
  P4,
  P5,
  P6,
  P7
};
class CPU
{
private:
  CPU_Rank rank;
  float frequency;
  float voltage;

public:
  void run() { std::cout << "start run!" << std::endl; }
  void stop() { std::cout << "CPU stop!" << std::endl; }

  void setFrequency(float fre) { frequency = fre; }
  void setVoltage(float vol) { voltage = vol; }

  float getFrequency() const { return frequency; }
  float getVoltage() const { return voltage; }
  CPU(CPU_Rank px, float fre, float vol)
  {
    rank = px;
    frequency = fre;
    voltage = vol;
    std::cout << "构造函数。" << std::endl;
  
  }
  ~CPU() { std::cout << "析构了一个CPU" << std::endl; };

};