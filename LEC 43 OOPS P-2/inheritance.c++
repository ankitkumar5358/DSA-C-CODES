#include <iostream>
using namespace std;

class Human {

public:
  int height;
  int weight;
  int age;

public:
  int getAge() {
    return this->age;
  }

  void setWeight(int w) {
    this-> weight = w;
  }
};

class Male : public Human {
public:
  string color;
  void sleep() {
    cout << "Male in sleep" << endl;
  }
};

class Female : public Human {
protected:
  bool makeup = true;
  string acidity = "yes";
  
};

int main() {

  Male obj1;

  cout << obj1.age << endl;
  cout << obj1.height << endl;
  cout << obj1.weight << endl;

  cout << obj1.color << endl;

  obj1.setWeight(64);
  cout << obj1.weight << endl;
  obj1.sleep();

  // Female f1;
  // cout << f1.makeup;




  return 0;
}
