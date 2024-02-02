#include <iostream>
using namespace std;
void reverse(char* s);
void reverse(char* s, char* t);

int main()
{
  char s[20];
  //s = ' ';  abcd
  cin >> s;
  cout << s << endl;
  reverse(s);
  cout << s << endl;

}

void reverse(char* s)
{
  reverse(s, s + strlen(s)-1);
}

void reverse(char* s, char* t)
{
  cout << "s: " << s << " t: " << t << endl;
  char c;
  if (s < t)
  {
    c = *s;
    *s = *t;
    *t = c;
    reverse(++s, --t);
  }
}