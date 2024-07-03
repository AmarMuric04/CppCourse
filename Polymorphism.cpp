#include <iostream>
#include <string>
#include <list>
using namespace std;

class AbscratctEmployee
{
  virtual void AskForPromotion() = 0;
};

class Employee : AbscratctEmployee
{
private:
  static list<Employee *> Employees;

protected:
  string Name;
  string Company;
  int Age;

public:
  static const list<Employee *> getEmployees()
  {
    return Employees;
  }
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
  virtual void Work()
  {
    cout << Name << " is checking emails, working a random job\n";
  }

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
    Employees.push_back(this);
  }
};

class Developer : public Employee
{
private:
  int BugsFixed;

public:
  string FavProgrammingLang;

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

  void Work()
  {
    cout << Name << " is programming, making a new app and fixing bugs.\n";
    FixBug();
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

  void Work()
  {
    cout << Name << " is teaching " << Subject << endl;
  }
};

list<Employee *> Employee::Employees;

int main()
{
  Employee *employee1 = new Employee("Amar", "Amazon", 19);

  // cout << employee1->getName() << endl;
  // employee1->setName("Murga");
  // cout << employee1->getName() << endl;
  // employee1->AskForPromotion();

  Developer developer1 = Developer("Benjamin", "DevTeam", 19, "C++");
  // developer1.FixBug();
  // developer1.AskForPromotion();

  Teacher teacher1 = Teacher("Adnan", "Desanka Maksimovic", 19, "Programiranje");
  // teacher1.IntroduceYourself();
  // teacher1.PrepareLesson();

  // developer1.Work();
  // teacher1.Work();

  for (Employee *employee : Employee::getEmployees())
  {
    employee->IntroduceYourself();
    employee->Work();
  }

  Employee *employeeOne = &developer1;
  Employee *employeeTwo = &teacher1;
  // employeeOne->Work();
  // employeeTwo->Work();

  system("pause>0");
}