#include <iostream>
using namespace std;
int main()
{
  int z = 3;
  int *p;
  p = &z;
  cout << "," << p << "  " << *p << endl;
  p++;
  cout << endl
       << p;
  char ch = 'a';
  char *s;
  s = &ch;
  cout << s<<endl;
  *s='b';
  cout<<ch;
  cout<<endl<<*s;
  return 0;
}