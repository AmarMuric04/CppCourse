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

  void ispis_tima(Tim *tim)
  {
    cout << tim;
  }
};

int main()
{

  return 0;
}
