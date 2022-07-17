#include <iostream>
using namespace std;

class Vehicle{

public:
  int weight;
  int cc;

public:
  void specs() {
    cout << "Racing Info" << endl;
   }
};

class Car  : public Vehicle{
  public:
  string model;

public:
  void color(){
    cout << "Red " << endl;
  }

};


class Bike : public Car, public Vehicle {

public:
  int seat;

};

int main() {
  Bike b1;
  b1.color();

  return 0;
}
