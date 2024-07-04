#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  // int a = 3, b = 4;

  // Swap(a, b);
  // cout << a << "  " << b << endl;

  vector<int> v1{1, 2, 3, 4, 5};
  v1.push_back(6);
  v1.pop_back();

  cout << v1.size() << endl;
  cout << v1.capacity() << endl;

  // v1.resize(100);
  cout << v1.empty() << endl;
  v1.erase(v1.begin() + 3);
  cout << v1.size() << endl;
  cout << v1.front() << endl;
  cout << v1.back() << endl;
  v1.insert(v1.begin() + 2, 10);
  cout << v1.at(2) << "<----" << endl;
  cout << v1[2] << "<----" << endl;

  for (int v : v1)
    cout
        << v;
  return 0;
}