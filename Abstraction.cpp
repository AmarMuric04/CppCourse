#include <iostream>
#include <string>
using namespace std;

class AbscratctEmployee
{
  int id;
  virtual void AskForPromotion() = 0;
};

class Employee : public AbscratctEmployee
{
private:
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
      cout << Name << " got denied\n";
  }

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }
};

int main()
{
  Employee *employee1 = new Employee("Amar", "Amazon", 19);

  cout << employee1->getName() << endl;
  employee1->setName("Murga");
  cout << employee1->getName() << endl;
  employee1->AskForPromotion();
  system("pause>0");
}