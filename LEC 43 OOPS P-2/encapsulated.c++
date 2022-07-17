#include <iostream>
using namespace std;

class Student {

private :
  string st_name;
  int st_roll_n0;
  int st_age;

public:
  int getAge(){

    return this-> st_age;

  }

};

int main() {

  Student first;
  cout << "Everything is good" << endl;
  return 0;
}
