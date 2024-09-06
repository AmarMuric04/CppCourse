#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
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

  // vector<int> v1{1, 2, 3, 4, 5};
  // v1.push_back(6);
  // v1.pop_back();

  // cout << v1.size() << endl;
  // cout << v1.capacity() << endl;

  // // v1.resize(100);
  // cout << v1.empty() << endl;
  // v1.erase(v1.begin() + 3);
  // cout << v1.size() << endl;
  // cout << v1.front() << endl;
  // cout << v1.back() << endl;
  // v1.insert(v1.begin() + 2, 10);
  // cout << v1.at(2) << "<----" << endl;
  // cout << v1[2] << "<----" << endl;
  // sort(v1.begin(), v1.end());
  // if (binary_search(v1.begin(), v1.end(), 10))
  //   cout << "Found it!\n";

  // for (int v : v1)
  //   cout
  //       << v;

  list<int> list{1, 2, 3, 4, 5};

  auto it = list.begin();
  advance(it, 3);

  list.insert(it, 10);
  for (int l : list)
    cout
        << l;
  return 0;
}