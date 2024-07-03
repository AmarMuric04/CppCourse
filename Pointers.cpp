#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  cout << &n << endl;
  int *nPtr = &n;
  cout << nPtr << endl;
  cout << *nPtr << endl;

  *nPtr = 10;
  cout << *nPtr << endl;
  cout << n << endl;

  int v;
  int *ptr2 = &v;
  *ptr2 = 2;

  cout << *ptr2 << endl;
  cout << v << endl;

  return 0;
}