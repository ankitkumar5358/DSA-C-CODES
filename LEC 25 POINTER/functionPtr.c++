#include <iostream>
using namespace std;

void print(int *p){

  cout << p << endl; //address
  cout << *p << endl; // value

}

void update(int *p){
  // p = p + 1;
  *p = *p + 1;
}

int main() {

int value = 5;
int *p = &value;
//print(p);
cout << "before value of p " << *p << endl;
update(p);
cout << "after value of p " << *p << endl;
  return 0;



  }
