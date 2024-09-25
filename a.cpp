#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Aktivnost
{
public:
  const char *Id;
  string Naziv;
  double Budzet;
  string Sala;

  Aktivnost() : Id("amar"), Naziv("Akt1"), Budzet(5000.50), Sala("...")
  {
  }
  Aktivnost(const char *id, const string &naziv, double budzet, const string &sala) : Id(id), Naziv(naziv), Budzet(budzet), Sala(sala)
  {
  }

  virtual void PrikaziInformacije() = 0;
};

class SportskaAktivnost : public Aktivnost
{
  string Sport;

public:
  SportskaAktivnost() : Sport("fudbal") {};
  SportskaAktivnost(const string &sport, const char *id, const string &naziv, double budzet, const string &sala) : Aktivnost(id, naziv, budzet, sala), Sport(sport) {}

  void PrikaziInformacije()
  {
    cout << Sport << Id << Naziv << Budzet << Sala << endl;
  }
};

class EdukativneAktivnost : public Aktivnost
{
  string Tema;

public:
  EdukativneAktivnost() : Tema("istorija") {};
  EdukativneAktivnost(const string &tema, const char *id, const string &naziv, double budzet, const string &sala) : Aktivnost(id, naziv, budzet, sala), Tema(tema) {}

  void PrikaziInformacije() override
  {
    cout << Tema << Id << Naziv << Budzet << Sala << endl;
  }
};
template <typename T>
class UniverzalniCentar
{
public:
  vector<T> Aktivnosti;

  UniverzalniCentar() {}

  void DodajAktivnost(const T &aktivnost)
  {
    Aktivnosti.push_back(aktivnost);
  }

  T &operator[](int index)
  {
    return Aktivnosti[index]; // Return a reference to Aktivnost*
  }

  const T &operator[](int index) const
  {
    return Aktivnosti[index]; // Const version to access without modification
  }

  UniverzalniCentar &operator+=(const T &aktivnost)
  {
    Aktivnosti.push_back(aktivnost);
    return *this;
  }
  void PrikaziSveInformacije()
  {
    for (size_t i = 0; i < Aktivnosti.size(); i++)
    {
      Aktivnosti[i]->PrikaziInformacije();
    }
  }
};

int main()
{
  SportskaAktivnost sa1("Fudbal", "identitet1", "Sport", 5004.50, "ova");
  EdukativneAktivnost ea1("Istorija", "identitet2", "Kurac", 150.25, "ona");

  UniverzalniCentar<Aktivnost *> uc;

  uc.DodajAktivnost(&sa1);
  uc.DodajAktivnost(&sa1);
  uc.DodajAktivnost(&ea1);
  uc.DodajAktivnost(&ea1);
  uc += &sa1;

  uc[1]->PrikaziInformacije();
  cout << endl;

  uc.PrikaziSveInformacije();

  return 0;
}

// PRE STVARANJA KLASE
template <typename T>
class Ekipe
{
  vector<T> niz;

  void dodaj(T *a)
  {
    niz.push_back(a);
  }

  void operator+=(T *a)
  {
    dodaj(a);
  }

  for (Tim *tim1 : timovi)
    for (Tim *tim2 : timovi)
      if (tim1.broj_poena > tim2.broj_poena)
        najjaci_tim = tim1;

  for (Tim *tim1 : timovi)
    cout << tim1;

  ostream &operator<<(ostream &COUT)
  {
    COUT << "NESTO SE PRINTA" << endl;
    return COUT;
  };

  <, >, <=, >=->bool operatorX(Ime - klase & a)
  {
    return this->broj_poena X a.broj_poena;
  }

  Ime-klase *operator[](int index)
  {
    return niz[index];
  }
}