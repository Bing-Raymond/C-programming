#include <iostream>
// ���cstdlib ��ʲô�ã���֪����
//#include <cstdlib>
using namespace std;

int main()
{
  char flag;
  while (1)
  {
    cout << "���������𣿣�Yes or No��";
    cin >> flag;
    // toupper��char�� ��ɴ�д��ĸ��
    if (toupper(flag) == 'Y')
    {
      cout << "�����������ꡣ";
      break;
    }
    if (toupper(flag) == 'N')
    {
      cout << "����û�����ꡣ";
      break;
    }
  }


}