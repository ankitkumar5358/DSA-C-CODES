#include <iostream>

using namespace std;


int main() {
  int num = 5;88
  cout << num << endl;

  // address of operator
  cout << "Address of Num is " << &num;
  int i = 100;
  // int *ptr = &i;
  int *ptr = &i;
  cout << endl;
  cout << ptr << endl;
  cout << *ptr;

  double d =  4.3;
  double *p2 = &d;

  cout << "Address is " << p2 << endl;
  cout  << "Value is " << *p2 << endl;

  cout << "Size od integer is" << sizeof(num) << endl;
  cout << "Size od pointer is" << sizeof(*ptr) << endl;
  cout << "Size od pointer is" << sizeof(*p2) << endl;
  char name = 'Ankit';
  char *ch = &name;
  cout << "Size od pointer is" << sizeof(*ch) << endl;
  return 0;
}
