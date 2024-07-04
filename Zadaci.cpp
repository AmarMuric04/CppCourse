#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <list>
#include <vector>
#include <cstdlib>
using namespace std;

/*
class Krug
{
private:
  int r;

public:
  void inic(int poluprecnik)
  {
    r = poluprecnik;
  }
  void ispis()
  {
    cout << r << endl;
  }
  double O()
  {
    return 2 * M_PI * r;
  }
  double P()
  {
    return 2 * M_PI * pow(r, 2);
  }
};

int main()
{

  Krug krug1;
  krug1.inic(5);
  krug1.ispis();
  cout << krug1.O() << endl
       << krug1.P() << endl;

  return 0;
}


class Stack
{
private:
  int Duzina;
  char Vrh;
  char *Karakteri;

public:
  Stack(int duzina = 100) : Duzina(duzina), Vrh(-1)
  {
    Karakteri = new char[Duzina];
  }

  Stack(const char *karakteri, int duzina) : Duzina(duzina), Vrh(-1)
  {
    if (std::strlen(karakteri) > duzina)
    {
      std::cout << "Nepravilan input" << std::endl;
      Karakteri = nullptr;
    }
    else
    {
      Karakteri = new char[Duzina];
      for (int i = 0; i < duzina; ++i)
      {
        Karakteri[++Vrh] = karakteri[i];
      }
    }
  }

  ~Stack()
  {
    delete[] Karakteri;
  }
  void reset()
  {
    Vrh = -1;
  }
  void push(char karakter)
  {
    if (!full())
      Karakteri[++Vrh] = karakter;
    else
      cout << "Stack je prepunjen";
  }
  char pop()
  {
    if (!empty())
      return Karakteri[Vrh--];
    else
      return '\0';
  }
  char top_of()
  {
    if (!empty())
      return Karakteri[Vrh];
    else
      return '\0';
  }
  bool empty()
  {
    return Vrh == -1;
  }
  bool full()
  {
    return Vrh == Duzina - 1;
  }
  void ispis()
  {
    if (!empty())
      for (int i = 0; i <= Vrh; i++)
        cout << Karakteri[i];
  }
};

int main()
{
  Stack stack1(20);
  stack1.push('a');
  stack1.push('m');
  stack1.push('a');
  stack1.push('r');
  stack1.push(' ');
  stack1.push('m');
  stack1.push('u');
  stack1.push('r');
  stack1.push('g');
  stack1.push('a');
  stack1.push('m');
  stack1.push('a');
  stack1.push('n');
  stack1.push(' ');
  stack1.push('1');
  stack1.push('2');
  stack1.push('3');
  stack1.push('1');
  stack1.push('2');
  stack1.push('3');
  stack1.ispis();
  // cout << endl
  //  << stack1.full() << endl;
  cout << endl;
  cout << stack1.pop() << endl;
  stack1.ispis();
  cout << endl;
  cout << stack1.top_of() << endl;
  stack1.ispis();

  return 0;
}

class Clan
{
private:
  int ClanskiBroj;
  string Ime;
  string Prezime;
  double TrenutnoStanje;
  bool Pocasni;

  Clan() {}

  Clan(int clanskiBroj, string &ime, string &prezime)
  {
    ClanskiBroj = clanskiBroj;
    Ime = ime;
    Prezime = prezime;
  }
};

int main()
{

  return 0;
}

class Fibonaci
{
private:
  int Duzina;
  int *Niz;

  void GenerisiFibonacijev()
  {
    Niz[0] = 0;
    Niz[1] = 1;

    for (int i = 2; i < Duzina; i++)
      Niz[i] = Niz[i - 1] + Niz[i - 2];
  }

public:
  Fibonaci()
  {
    Duzina = 10;
    Niz = new int[Duzina];
    GenerisiFibonacijev();
  }

  Fibonaci(int duzina)
  {
    Duzina = duzina;
    Niz = new int[duzina];
    GenerisiFibonacijev();
  }

  Fibonaci(Fibonaci &original)
  {
    Duzina = original.Duzina;
    Niz = new int[Duzina];

    for (int i = 0; i < Duzina; i++)
      Niz[i] = original.Niz[i];
  }

  ~Fibonaci()
  {
    delete[] Niz;
    Niz = nullptr;
  }

  int suma()
  {
    int suma = 0;
    for (int i = 0; i < Duzina; i++)
      suma += Niz[i];
    return suma;
  }

  int vrednost(int i)
  {
    if (i < 0 || i > Duzina - 1)
    {
      cout << "Nepravilan unos" << endl;
      return -1;
    }

    else
      return Niz[i];
  }

  void prosiri(int X)
  {
    delete[] Niz;
    Duzina += x;
    Niz = new int[Duzina];

    GenerisiFibonacijev();
  }

  void ispisi()
  {
    for (int i = 0; i < Duzina; i++)
      cout << Niz[i] << "   ";
  }
};

int main()
{

  Fibonaci fib2(25);
  cout << fib2.vrednost(26) << endl;

  Fibonaci fib3(fib2);
  fib3.prosiri(5);
  fib3.ispisi();

  return 0;
}

class Tacka
{
public:
  int X, Y;

  Tacka()
  {
    X = 3;
    Y = 3;
  }

  Tacka(int x, int y)
  {
    X = x;
    Y = y;
  }

  void setX(int x)
  {
    X = x;
  }
  void setY(int y)
  {
    Y = y;
  }

  int getX()
  {
    return X;
  }
  int getY()
  {
    return Y;
  }
};

class Krug
{
private:
  int C, R;

  Krug()
  {
    C = 3;
    R = 3;
  }

  Krug(int c, int r)
  {
    C = c;
    R = r;
  }
};

int main()
{
  return 0;
}

enum class Zanr
{
  POP,
  REP,
  ROK
};

class Izvodjac
{
private:
  string Ime;
  Zanr MojZanr;

public:
  Izvodjac(const string &ime, Zanr mojZanr)
  {
    Ime = ime;
    MojZanr = mojZanr;
  }

  void ispis() const
  {
    std::string zanr_str;
    switch (MojZanr)
    {
    case Zanr::POP:
      zanr_str = "POP";
      break;
    case Zanr::REP:
      zanr_str = "REP";
      break;
    case Zanr::ROK:
      zanr_str = "ROK";
      break;
    default:
      zanr_str = "Nepoznat";
      break;
    }
    std::cout << Ime << " (" << zanr_str << ")" << std::endl;
  }

  const string &getIme() const
  {
    return Ime;
  }

  Zanr getZanr()
      const
  {
    return MojZanr;
  }

  friend ostream &operator<<(ostream &, vector<Izvodjac> &);
};

ostream &operator<<(ostream &COUT, vector<Izvodjac> &izvodjaci)
{

  for (Izvodjac &izvodjac : izvodjaci)
  {
    COUT << izvodjac.getIme() << " (";
    string zanr_str;
    switch (izvodjac.getZanr())
    {
    case Zanr::POP:
      zanr_str = "POP";
      break;
    case Zanr::REP:
      zanr_str = "REP";
      break;
    case Zanr::ROK:
      zanr_str = "ROK";
      break;
    default:
      zanr_str = "Nepoznat";
      break;
    }
    COUT << zanr_str << ")" << endl;
  }

  return COUT;
}

class Pesma
{
private:
  string Naziv;
  int Minutes, Sec;
  int MaxIzv;
  vector<Izvodjac> Izvodjaci;

public:
  Pesma(const string &naziv, int minutes, int sec, int maxIzv) : Naziv(naziv), Minutes(minutes), Sec(sec), MaxIzv(maxIzv){};

  int getMinutes()
  {
    return Minutes;
  }
  int getSec()
  {
    return Sec;
  }
  void dodajIzvodjaca(Izvodjac &izvodjac)
  {
    if (Izvodjaci.size() >= MaxIzv)
      cout << "Ne moze\n";
    else
      Izvodjaci.push_back(izvodjac);
  }
  void ispis()
  {
    cout << "P(" << Naziv << " - " << getMinutes() << " : " << getSec() << ")" << endl;

    cout << Izvodjaci;
  }

  friend bool compareLength(Pesma &, Pesma &);
};

bool compareLength(Pesma &prva, Pesma &druga)
{
  if (prva.getMinutes() > druga.getMinutes())
    return true;
  else if (prva.getMinutes() == druga.getMinutes())
  {
    cout << "Iste su\n";
    return false;
  }
  else
    return false;
}

int main()
{
  Izvodjac amar("amar", Zanr::POP);
  Izvodjac murga("murga", Zanr::REP);
  Izvodjac benjamin("benjamin", Zanr::ROK);

  Pesma pesma("pesma", 2, 30, 6);
  pesma.dodajIzvodjaca(amar);
  pesma.dodajIzvodjaca(murga);
  pesma.dodajIzvodjaca(benjamin);
  pesma.dodajIzvodjaca(murga);
  pesma.dodajIzvodjaca(amar);
  pesma.dodajIzvodjaca(benjamin);
  pesma.ispis();
  Pesma pesma2("pesma", 4, 30, 6);

  return 0;
}
*/

class Datum
{
private:
  int Dan, Mesec, Godina;

public:
  Datum(int dan, int mesec, int godina) : Dan(dan), Mesec(mesec), Godina(godina){};

  Datum(const Datum &datum)
  {
    Dan = datum.Dan;
    Mesec = datum.Mesec;
  }

  Datum() : Dan(1), Mesec(1), Godina(2000){};

  int getDan()
  {
    return Dan;
  }
  int getMesec()
  {
    return Mesec;
  }
  int getGodina()
  {
    return Godina;
  }

  friend ostream &operator<<(ostream &COUT, Datum &datum);
  friend bool uporediDatum(Datum &, Datum &);
};

ostream &operator<<(ostream &COUT, Datum &datum)
{
  COUT << datum.Godina << "." << datum.Mesec << "." << datum.Dan << endl;
  return COUT;
}

bool uporediDatum(Datum &datum1, Datum &datum2)
{
  if (datum1.Godina > datum2.Godina)
    return true;
  else if (datum1.Godina == datum2.Godina && datum1.Mesec > datum2.Mesec)
    return true;
  else if (datum1.Mesec == datum2.Mesec && datum1.Dan > datum2.Dan)
    return true;
  else
    return false;
}

class Lek
{
private:
  int Id;

public:
  string Naziv;
  Datum *RokTrajanja;
  double Cena;

  Lek(const string &naziv, Datum *rokTrajanja, double cena) : Naziv(naziv), RokTrajanja(rokTrajanja), Cena(cena)
  {
    Id = rand() % 1000 + 1;
  }

  Lek(const Lek &lek)
  {
    Naziv = lek.Naziv;
    RokTrajanja = lek.RokTrajanja;
    Cena = lek.Cena;

    Id = rand() % 1000 + 1;
  }

  ~Lek()
  {
    delete RokTrajanja;
  }

  string &getNaziv()
  {
    return Naziv;
  }
  void getRokTrajanja()
  {
    cout << *RokTrajanja;
  }
  int getId()
  {
    return Id;
  }
  double getCena()
  {
    return Cena;
  }

  void setNaziv(string &naziv)
  {
    Naziv = naziv;
  }
  void setRokTrajanja(Datum *rokTrajanja)
  {
    RokTrajanja = rokTrajanja;
  }
  void setId(int id)
  {
    Id = id;
  }
};

ostream &operator<<(ostream &COUT, Lek &lek)
{
  COUT << lek.getId() << "-" << lek.getNaziv() << ":" << *lek.RokTrajanja << "-" << lek.Cena << endl;
}

int main()
{

  Lek lek1("Kokaina", new Datum(5, 12, 2003), 200.5);
  Lek lek2("Paracetamol", new Datum(27, 12, 2004), 123.50);

  lek1.getRokTrajanja();
  lek1.setRokTrajanja(new Datum(15, 30, 2020));
  lek1.getRokTrajanja();

  cout << lek1;
  Lek lek3(lek1);
  cout << lek3;

  Datum datum1(4, 20, 2005);
  cout << datum1;

  return 0;
}