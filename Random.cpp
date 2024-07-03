#include <iostream>

int main()
{
  int height;
  char ch = '*';
  std::cin >> height;

  for (int i = 0; i < height; i++)
  {
    std::cout << std::endl;
    for (int j = 0; j < height - i - 1; j++)
      std::cout << " ";
    for (int k = 0; k < 1 + (2 * i); k++)
      std::cout << ch;
    ;
  }

  for (int i = 0; i < height / 2; i++)
  {
    std::cout << std::endl;
    for (int j = 0; j < height - 1; j++)
      std::cout << " ";
    std::cout << "|";
  }

  return 0;
}