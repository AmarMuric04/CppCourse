#include <iostream>
#include <vector>
using namespace std;
bool ascendingCompare(int a, int b)
{
  return a < b;
}
bool descendingCompare(int a, int b)
{
  return a > b;
}

void customSort(vector<int> &numbersVector, bool (*compareFunctionPtr)(int, int))
{
  for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
  {
    int bestIndex = startIndex;

    for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
    {
      // We are doing comparison here
      if (compareFunctionPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
        bestIndex = currentIndex;
    }

    swap(numbersVector[startIndex], numbersVector[bestIndex]);
  }
}

void printNumbers(vector<int> &numbersVector)
{
  for (int i = 0; i < numbersVector.size(); ++i)
    cout << numbersVector[i] << ' ';
}

int main()
{

  vector<int> myNumbers = {2, 5, 1, 3, 6, 4};
  bool (*funcPtr)(int, int) = ascendingCompare;

  customSort(myNumbers, funcPtr);

  printNumbers(myNumbers);

  system("pause>0");
}