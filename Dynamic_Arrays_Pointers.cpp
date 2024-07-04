#include <iostream>
using namespace std;

int main()
{
  int size;
  cin >> size;
  // int myArr[5];
  int *myArray = new int[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Array[" << i << "]: ";
    cin >> myArray[i];
  }

  for (int i = 0; i < size; i++)
  {
    cout << *(myArray + i) << "  ";
  }

  delete[] myArray;
  myArray = NULL;

  return 0;
}