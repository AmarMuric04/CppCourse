#include <iostream>
using namespace std;

class Book
{
public:
  string Title;
  string Author;
  float *Rates;
  int RatesCounter;

  Book(string title, string author)
  {
    Title = title;
    Author = author;
    RatesCounter = 2;
    Rates = new float[RatesCounter];
    Rates[0] = 4;
    Rates[0] = 5;

    cout
        << "Constructor invoked " << Title << endl;
  }

  ~Book()
  {
    delete[] Rates;
    Rates = nullptr;

    cout << "Destructor invoked " << Title << endl;
  }
  Book(const Book &original)
  {
    Title = original.Title;
    Author = original.Author;
    RatesCounter = original.RatesCounter;

    Rates = new float[RatesCounter];
    for (int i = 0; i < RatesCounter; i++)
    {
      Rates[i] = original.Rates[i];
    }
  }
};

void PrintBook(Book book)
{
  cout << "Title: " << book.Title << endl;
  cout << "Author: " << book.Author << endl;

  float sum = 0;

  for (int i = 0; i < book.RatesCounter; i++)
    sum += book.Rates[i];

  cout << "Average is: " << sum / book.RatesCounter;
}

int main()
{
  Book book1("Murga", "Ovo Ono");
  Book book2("Amar", "Lagaaaaa");

  Book book3(book1);

  cout << book3.Title << endl;

  system("pause>0");
}