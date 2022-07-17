#include <iostream>
using namespace std;

class A{

public:

// function overloading
void sayHello() {
    cout << "Hello Brother 🙏" << endl;
  }

int sayHello(int n){
      cout << "Hello Brother 🙏" << endl;
}

void sayHello(string name, int n){
      cout << "Hello Brother 🙏" << endl;
}

};

// operator overloading

class B {
public:
  int a;
  int b;

public:
  int add() {
    return a+b;
  }

void operator+ (B &obj){
  int value1 = this -> a;
  int value2 = obj.a;
  cout << "Output of a+b is " << value2 - value1 << endl;
}

//bracket overloading
void operator() () {
  cout << "This is bracket " << this->a << endl;
}

};


// function overriding

class Animal{

public:
  void speak() {
    cout << "Barking" << endl;
   }
};

class Dog : public Animal{
public:
  void speak(){
    cout <<"Speaking" << endl;
  }
};



int main() {

  // function overriding
  Dog obj;
  obj.speak(); // speaking prints



   /* fn overload obj
   A a;
   a.sayHello();


   // operator overload obj
   B obj1, obj2;
   obj1.a = 4;
   obj2.a = 7;
   obj1 + obj2;

   //bracket overloading
   obj1();
   */
   return 0;
}
