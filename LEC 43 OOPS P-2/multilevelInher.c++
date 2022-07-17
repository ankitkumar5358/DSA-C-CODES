#include <iostream>
using namespace std;

//multilevel
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

class GermanShephard : public Dog{


};

int main() {
  GermanShephard g;
  g.speak();
  cout << g.age;

  return 0;
}
