#include "Trapzint.h"
#include <iomanip>
using namespace std;
int main()
{
  Fun f;                 // ����Fun��Ķ���
  Trapz trapzl(f);       // ����Trapz��Ķ���
  cout << "TRAPZ Int: " << setprecision(7) << trapzl(0, 2, 1e-7) << endl;  // ���㲢������
}