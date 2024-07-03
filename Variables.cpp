#include <iostream>
using namespace std;

int main()
{
  float annualSalary;

  cout << "Enter your annual salary: ";
  cin >> annualSalary;
  float monthlySalary = annualSalary / 12;

  cout << annualSalary << endl
       << monthlySalary << endl;

  float moneyInADecade = annualSalary * 10;

  cout << "In 10 years you'll have: " << moneyInADecade << endl;
  char charA = 'a';

  int yearOfBirth = 2004;
  char gender = 'm';
  bool isCool = true;
  float averageGrade = 4.5;

  cout << sizeof(bool);
  double balance = 98127489127.45;

  system("pause>0");
}