#include <iostream>

using namespace std;


int main() {

// pointing to int is created , and pointing to some garbage address
// int *p; --> eror and bad practice
// int *p = 0; // segementation fault

/*
int i = 5;
int *p = &i;
cout << *p << endl << i << endl << &i << endl ;

int *pt = 0;
pt = &i;
cout << pt << endl;
cout << *pt << endl;
*/



int num  = 5;
int a = num;
cout << "a before  " << num << endl;
a++;
cout << "a after  " << num << endl;

int *p = &num;
cout << " before  " << num << endl;
(*p)++;
cout << " after  " << num << endl;

// copy a pointer
int *q = p;
cout << p << endl << q << endl << *p << endl << *q << endl ;

// *** VVIp
int i = 3;
int *t = &i;

*t = *t + 1;
cout << *t << endl;
cout << "before t  " << t << endl;
t = t + 1;
cout << "after t  " << t << endl;

  return 0;
}
