#include <iostream>
using namespace std;

class Student
{
public:
  string Name;
  int Age;
  char Gender;

  virtual void Study() = 0;
};

class ProgrammingStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning programming\n";
  }
};

class ArtStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning art\n";
  }
};

class MusicStudent : public Student
{
public:
  void Study()
  {
    cout << "Learning music\n";
  };
};

int main()
{
  MusicStudent student1;
  // student1.Study();

  Student *students[3];

  students[0] = new ProgrammingStudent();
  students[1] = new ArtStudent();
  students[2] = new MusicStudent();

  for (Student *s : students)
    s->Study();

  return 0;
}