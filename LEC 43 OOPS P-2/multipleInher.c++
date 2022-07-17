#include <iostream>
using namespace std;


class Animal{

public:
  int weight;
  int age;

public:
  void bark() {
    cout << "barking" << endl;
   }
};

class Human {
  public:
  string color;

public:
  void speak(){
    cout << "Speaking " << endl;
  }

};

//multiple
class Hybrid : public Human, public Animal {


};

int main() {
  Hybrid obj1;
  obj1.speak();
  obj1.bark();

  return 0;
}
