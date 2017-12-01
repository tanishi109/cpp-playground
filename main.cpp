#include <iostream>

using namespace std;

#include "./sub/virtual.cpp"

void sub1() {
  Clock clock;
  clock.Action();

  LaughClock baby;
  baby.Action();

  Clock *boy = new LaughClock();
  boy->Action();
}

int main() {

  sub1(); 

  return 0;
}