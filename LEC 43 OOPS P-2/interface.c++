#include <iostream>
using namespace std;

class Animal {
  public :
  // virtual void function
  virtual void fun() = 0;
  // normal member function
  void sleep(){
    cout << "Sleeping" << endl;
  }

};

class Dog : public Animal {
  public : void fun(){
    cout << "Woof" << endl;
  }

};

int main() {
  Dog obj;
  obj.sleep();
  obj.fun();

  return 0;
}
