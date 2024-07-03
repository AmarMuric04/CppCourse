#include <iostream>
using namespace std;

int getMin(int array[], int size)
{
  if (size < 0)
    return -1;

  int min = array[0];
  for (int i = 0; i < size; i++)
  {
    int num = array[i];
    if (min > num)
      min = num;
  }

  return min;
}

int getMax(int array[], int size)
{
  if (size < 0)
    return -1;

  int max = array[0];
  for (int i = 0; i < size; i++)
  {
    int num = array[i];
    if (max < num)
      max = num;
  }

  return max;
}

void getMinAndMax(int array[], int size, int *min, int *max)
{
  for (int i = 0; i < size; i++)
  {
    int num = array[i];
    if (*max < num)
      *max = num;
    if (*min > num)
      *min = num;
  }
}

int main()
{
  int number[5] = {5, 4, 3, 2, 1};
  // cout << getMin(number, 5) << endl;
  // cout << getMax(number, 5) << endl;

  int min = number[0], max = number[0];

  getMinAndMax(number, 5, &min, &max);
  cout << "Min is " << min << endl
       << "Max is " << max << endl;

  return 0;
}