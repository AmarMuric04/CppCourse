#include <iostream>
using namespace std;

class Book
{
public:
  string Title;
  string Author;
  int *Rates;
  int RatesCounter;

  Book(string title, string author)
  {
    Title = title;
    Author = author;
    RatesCounter = 2;
    Rates = new int[RatesCounter];
    Rates[0] = 4;
    Rates[0] = 5;

    cout
        << "Constructor invoked " << Title << endl;
  }

  ~Book()
  {
    delete Rates;
    Rates = nullptr;

    cout << "Destructor invoked " << Title << endl;
  }
};

int main()
{
  Book book1("Murga", "Ovo Ono");
  Book book2("Amar", "Lagaaaaa");

  Book book3 = book2;

  system("pause>0");
}