#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
  string Name;
  int Age;
  char Gender;
  float Grade;

  Student() : Name("Amar"), Age(19), Gender('m'), Grade(4.5) {}

  Student(const string &name, int age, char gender, float grade) : Name(name), Age(age), Gender(gender), Grade(grade) {}
};

int main()
{
  Student students[3] = {
      {"Amar", 19, 'm', 5.0},
      {"Murga", 20, 'm', 6.0},
      {"Benjamin", 21, 'm', 8.0},
  };

  // Student students[3];

  // for (int i = 0; i < 3; i++)
  // {
  //   cout << "STUDENT " << i + 1 << endl;

  //   Student s;
  //   cout << "Name: ";
  //   cin >> s.Name;

  //   cout << "Gender: ";
  //   cin >> s.Gender;

  //   cout << "Age: ";
  //   cin >> s.Age;

  //   cout << "Grade: ";
  //   cin >> s.Grade;

  //   students[i] = s;
  // }

  // cout << "Grade of the first student is: " << students[0].Grade << endl;

  float sum;
  for (Student s : students)
    sum += s.Grade;

  cout << sum / 3 << endl;

  return 0;
}