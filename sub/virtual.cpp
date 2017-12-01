#include <iostream>

using namespace std;

class Clock
{
protected:
  int time;

public:
  Clock()
  {
    time = 0;
  }

  int GetTime()
  {
    return time;
  }

  void Tick()
  {
    ++time;
    if (time == 60)
      Action();
  }

  virtual void Action()
  {
    cout << "pi pi pi pi" << endl;
  }
};

class LaughClock : public Clock
{
public:
  virtual void Action()
  {
    cout << "ha ha ha ha" << endl;
  }
};
