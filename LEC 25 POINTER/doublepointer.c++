#include <iostream>
using namespace std;

void update(int **p2){
  //1
  // p2 = p2 + 1;
  //2
  *p2 = *p2 + 1;
  //3
  // **p2 = **p2 + 1;
}

int main() {


  /*
  int i = 5;
  int* ptr = &i;
  int** ptr2 = &ptr;

  cout << " printing ptr " << ptr << endl;
  cout << *ptr2 << endl;


  cout << i << endl;
  cout << *ptr << endl;
  cout << **ptr2 << endl;

  cout << endl;

  cout << &i << endl;
  cout << ptr << endl;
  cout << *ptr2 << endl;

  cout << endl;

  cout << &ptr << endl;
  cout << ptr2 << endl;

  */
  int i = 5;
  int* p = &i;
  int** p2 = &p;

  cout << "before" << i << endl;
  cout << "before" << p << endl;
  cout << "before" << p2 << endl;

  update(p2);

  cout << "after" << i << endl;
  cout << "after" << p << endl;
  cout << "after" << p2 << endl;




























































































  return 0;
}
