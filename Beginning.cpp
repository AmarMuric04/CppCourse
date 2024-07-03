#include <iostream>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std;

void operator+=(list<string> &array, string &item)
{
  array.push_back(item);
};

void operator-=(list<string> &array, string &item)
{
  array.remove(item);
};

ostream &operator<<(ostream &COUT, list<string> &array)
{
  for (string player : array)
    COUT << player << endl;
}

int main()
{
  list<string> players;
  auto start = chrono::high_resolution_clock::now();

  while (players.size() < 10)
  {
    string player;
    cout << "Napisi ime " << players.size() + 1 << ". igraca: " << endl;
    cin >> player;
    players += player;
  };

  cout << players;

  string player;

  cout << "Ime coveka kojeg zelis da maknes: ";
  cin >> player;

  if (binary_search(players.begin(), players.end(), player))
  {
    cout << "Igrac nadjen i bice sklonjen!... " << endl;
    players -= player;
    cout << "Igrac sklonjen, nova lista igraca je: " << endl;
    cout << players;
  }
  else
    cout << "Igrac nije nadjen!" << endl;

  auto end = chrono::high_resolution_clock::now();

  chrono::duration<double> duration = end - start;
  cout
      << duration.count() << endl;

  return 0;
}