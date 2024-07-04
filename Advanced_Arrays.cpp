#include <iostream>
using namespace std;

class Student
{
public:
  string Name;
  int Age;
  char Gender;

  Student(string name, int age, char gender)
  {
    Name = name;
    Age = age;
    Gender = gender;
  }

  static void Introduction()
  {
    cout << "Im a student";
  }
};

int main()
{
  Student::Introduction();

  return 0;
}