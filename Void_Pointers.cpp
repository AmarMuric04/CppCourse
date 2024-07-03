#include <iostream>
using namespace std;

void printNumber(int *numberPtr)
{
  cout << *numberPtr << endl;
}
void printLetter(char *letterPtr)
{
  cout << *letterPtr << endl;
}
void print(void *ptr, char type)
{
  switch (type)
  {
  case 'i':
    cout << *((int *)ptr) << endl;
    break;
  case 'c':
    cout << *((char *)ptr) << endl;
    break;
  default:
    cout << "Something went wrong...\n";
  }
};

int main()
{
  int number = 5;
  char letter = 'L';
  printNumber(&number);
  printLetter(&letter);

  print(&number, 'i');
  print(&letter, 'c');

  return 0;
}