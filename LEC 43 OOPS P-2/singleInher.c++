#include <iostream>
using namespace std;

//single
class Animal{

public:
  int weight;
  int age;

public:
  void speak() {
    cout << "Speaking" << endl;
   }
};

class Dog : public Animal{


};


int main() {
  Dog d;
  d.speak();
  cout << d.age << endl;

  return 0;
}
