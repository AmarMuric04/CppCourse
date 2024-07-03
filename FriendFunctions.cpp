// #include <iostream>

// class EquilateralTriangle
// {
// private:
//   float a;
//   float circumference;
//   float area;

// public:
//   void setA(int length)
//   {
//     a = length;
//     circumference = a * 3;
//     area = (1.73 * a * a) / 4;
//   }

//   // friend void printResults(EquilateralTriangle &);
//   friend class Homework;
// };

// class Homework
// {
// public:
//   void printResults(EquilateralTriangle &et)
//   {
//     std::cout << et.area << std::endl;
//     std::cout << et.circumference << std::endl;
//   };
// };

// int main()
// {
//   EquilateralTriangle et;
//   et.setA(10);

//   Homework hw;

//   hw.printResults(et);

//   system("pause>nul");
// }

#include <iostream>
#include <list>
using namespace std;

class Human
{

protected:
  int Age;
  string Name;

public:
  Human(string name)
  {
    Name = name;
    Age = 0;
  };

  void getName()
  {
    cout << "Youtubers name is: " << Name << endl;
  }
};

class Youtuber : public Human
{
  string ChannelName;
  list<string> Videos;

  Youtuber(string name, string channelName) : Human(name)
  {
    ChannelName = channelName;
  };

  friend void operator+=(Youtuber &, string &);
  friend Youtuber createAYoutubeChannel(const string &, const string &);
};

Youtuber createAYoutubeChannel(const string &name, const string &channelName)
{
  Youtuber yt1(name, channelName);
  string Video = "First video!";

  yt1 += Video;

  cout << yt1.ChannelName << endl;

  return yt1;
}

void operator+=(Youtuber &yt1, string &title)
{
  yt1.Videos.push_back(title);
}

int main()
{
  Youtuber Amar = createAYoutubeChannel("Murga", "MurgaYT");

  Amar.getName();

  return 0;
}