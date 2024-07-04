#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  cout << "Rows & Columns" << endl;
  cin >> rows >> cols;

  int *maxes = new int[rows];
  int *mins = new int[rows];
  int **table = new int *[rows];

  for (int i = 0; i < rows; i++)
    table[i] = new int[cols];

  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
    {
      cout << "Table[" << i << "][" << j << "]: ";
      cin >> table[i][j];
    }

  for (int i = 0; i < rows; i++)
  {
    maxes[i] = table[i][0];
    mins[i] = table[i][0];
    for (int j = 0; j < cols; j++)
    {
      if (table[i][j] > maxes[i])
        maxes[i] = table[i][j];
      if (table[i][j] < mins[i])
        mins[i] = table[i][j];
      cout << "  " << table[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < rows; i++)
    cout << "Max of row " << i + 1 << " is: " << maxes[i] << endl;
  for (int i = 0; i < rows; i++)
    cout << "Min of row " << i + 1 << " is: " << mins[i] << endl;

  for (int i = 0; i < rows; i++)
    delete[] table[i];

  delete[] table;
  delete[] maxes;
  delete[] mins;
  table = nullptr;
  maxes = nullptr;
  mins = nullptr;
  // cout << table;

  return 0;
}