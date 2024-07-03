#include <iostream>
#include <string>
using namespace std;

class AbscratctEmployee
{
  virtual void AskForPromotion() = 0;
};

class Employee : AbscratctEmployee
{
protected:
  string Name;
  string Company;
  int Age;

public:
  void setName(string name)
  {
    Name = name;
  }
  string getName()
  {
    return Name;
  }
  void setCompany(string company)
  {
    Company = company;
  }
  string getCompany()
  {
    return Company;
  }
  void setAge(int age)
  {
    if (age >= 18)
      Age = age;
  }
  int getAge()
  {
    return Age;
  }
  void IntroduceYourself()
  {
    cout << Name << endl
         << Company << endl
         << Age << endl;
  }
  void AskForPromotion()
  {
    if (Age > 30)
      cout << Name << " got promoted\n";
    else
      cout << Name << " got denied, not old enough.\n";
  }
  void Work()
  {
    cout << Name << "Checking emails, working a random job\n";
  }

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }
};

class Developer : public Employee
{
public:
  string FavProgrammingLang;
  int BugsFixed;

  Developer(string name, string company, int age, string favProgrammingLang) : Employee(name, company, age)
  {
    FavProgrammingLang = favProgrammingLang;
    BugsFixed = 0;
  }

  void FixBug()
  {
    cout << Name << " fixed a bug using " << FavProgrammingLang << endl;
    BugsFixed++;

    cout << "Bugs fixed in total: " << BugsFixed << endl;
  }

  void AskForPromotion()
  {
    if (BugsFixed > 5)
      cout << Name << " got promoted\n";
    else
      cout << Name << " got denied, not enough bugs fixed.\n";
  }
};

class Teacher : public Employee
{
public:
  string Subject;
  void PrepareLesson()
  {
    cout << Name << " is preparing a lesson for " << Subject << endl;
  }

  Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
  {
    Subject = subject;
  }
};

int main()
{
  Employee *employee1 = new Employee("Amar", "Amazon", 19);

  cout << employee1->getName() << endl;
  employee1->setName("Murga");
  cout << employee1->getName() << endl;
  employee1->AskForPromotion();

  Developer developer1 = Developer("Amar", "DevTeam", 19, "C++");
  developer1.FixBug();
  developer1.AskForPromotion();

  Teacher teacher1 = Teacher("Amar", "Desanka Maksimovic", 19, "Programiranje");
  teacher1.IntroduceYourself();
  teacher1.PrepareLesson();
  system("pause>0");
}