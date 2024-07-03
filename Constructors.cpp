#include <iostream>
using namespace std;

class User
{
public:
  string FirstName;
  string LastName;
  int Age;
  string Email;

  User()
  {
    FirstName = "N/A";
    LastName = "N/A";
    Age = 0;
    Email = "N/A";
  }

  User(string firstName, string lastName, int age)
  {
    FirstName = firstName;
    LastName = lastName;
    Age = age;
    Email = firstName + lastName + to_string(age) + "@gmail.com";
  }

  friend ostream &operator<<(ostream &COUT, User &u)
  {
    COUT << u.FirstName << endl;
    COUT << u.LastName << endl;
    COUT << u.Email << endl;

    return COUT;
  }
};

void GetUserInfo(User &u)
{
  cout << u.FirstName << endl;
  cout << u.LastName << endl;
  cout << u.Email << endl;
}

int main()
{
  User amar("amar", "muric", 19);
  GetUserInfo(amar);

  User amar2("mmar", "auric", 91);
  cout << amar2;

  User amar3;
  cout << amar3;

  return 0;
}