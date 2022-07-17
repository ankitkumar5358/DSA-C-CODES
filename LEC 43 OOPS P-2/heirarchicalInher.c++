#include <iostream>
using namespace std;

//heirarchical
class A{

public:
  void fun1() {
    cout << "Inside A" << endl;
   }
};

class B : public A{
public:
  void fun2() {
    cout << "Inside B" << endl;
   }
};

class C : public A{
public:
  void fun3() {
    cout << "Inside C" << endl;
   }
};

int main() {

  A obj1;
  obj1.fun1();

  B obj2;
  obj2.fun1();
  obj2.fun2();

  C obj3;
  obj3.fun1();
  // obj3.fun2(); // not accessible
  obj3.fun3();

  return 0;
}
