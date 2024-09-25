#include <iostream>

using namespace std;

class Ekipa
{
  virtual void poeni() = 0;
};

template <typename T>
class Tim
{

public:
  T tim;
  string naziv;
  string drzava;
  int broj_poena;
  vector<*Ekipa>

  Tim()
  {
    broj_poena = 0;
  }

  Tim(string Naziv, string Drzava, int Broj_poena)
  {
    string naziv = Naziv;
    string drzava = Drzava;
    int broj_poena = Broj_poena;
  }

  Tim(const Tim &original)
  {
    naziv = original.naziv;
    drzava = original.drzava;
    broj_poena = original.broj_poena;
  }

  bool operator==(Tim &other)
  {
    return this->price == other.naziv;
  }

  bool operator<(Tim &other)
  {
    return this->price < other.price;
  }

  void ispis_tima(Tim *tim)
  {
    cout << tim;
  }

  void dodaj(Ekipa *ekipa)
  {
    if (ekipa->vrsta != this->)
      jela.push_back(ekipa);
  }

  void operator+=(Ekipa *ekipa)
  {
    dodaj(ekipa);
  }
};

int main()
{

  return 0;
}
