#include <iostream>
#include<string.h>
#include<string>
using namespace std;

class Hero{

private:
    int health;   // class property

public:
    char* name;
    char level;  // class properties

    static int timeToComplete;

    // custom cosntrcutor
    Hero() {
      cout << "Constructor Called" << endl;
      name = new char[100];
    }

    // param const
    Hero (int health){
      cout << "this -> " << this << endl; // this operator
      this -> health = health;
    }

    Hero (int health, char level){
      this -> health = health;
      this -> level = level;
    }

    // copy Constructor
    Hero (Hero&  temp){
      char *ch = new char[strlen(temp.name) + 1];
      strcpy(ch, temp.name);
      this-> name = ch;

      cout << " Copy Constructor Called" << endl;
      this -> health = temp.health;
      this -> level = temp.level;
    }

    void print() {
        cout << endl;
        cout << " name " << this-> name << endl;
        cout << " health " << this-> health << endl;
        cout << " level " << this-> level << endl;
    }

    int getHealth() {
      return health;
    }

    char getLevel() {
      return level;
    }

    void setHealth(int h){
      health = h;
    }

    void setLevel(char ch){
      level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    // static fn
    static int random() {
      // we can't use non static variable
      return timeToComplete;
    }


    // destrutor
    ~Hero() {
      cout << "Destructor Called" << endl;
    }

};

int Hero::timeToComplete = 5;

int main() {

  
  /*
  cout << Hero::timeToComplete << endl;

  Hero a;
  cout << a.timeToComplete << endl;

  Hero b;
  a.timeToComplete = 10;

  cout << a.timeToComplete << endl;
  cout << b.timeToComplete << endl;

  Hero a; // static destrutor -- automatic call
  Hero *b = new Hero(); // dynamic destrutor -- manually call
  delete b;


  Hero hero1;

  hero1.setHealth(12);
  hero1.setLevel('J');
  char name[7] = "jujji";
  hero1.setName(name);

  hero1.print();

  Hero hero2(hero1);
  // hero2.print();

  hero1.name[0] = 'B';
  // hero1.print();
  hero2.print();

  // copy assignment operator
  hero1 = hero2;

  hero1.print();
  hero2.print();

  Hero S(70, 'C');
  S.print();

  // copy Constructor
  Hero R(S);
  R.print();


  Hero ramesh(10); // static
  cout << "Address of ramesh " << &ramesh << endl;
  ramesh.getHealth();

  Hero *h = new Hero(); // dynamic obj create


  // create class object
  Hero H1;

  //static alloc
  Hero a;
  a.setHealth(560);
  a.setLevel('V');
  cout << "level is  " << a.level << endl;
  cout << "health is  " << a.health << endl;

  Hero Prop;
  Prop.health = 95;
  Prop.level = 'X';

  cout << "health  is " << Prop.health << endl;
  cout << "Level  is " << Prop.level << endl;
  // cout <<" Size of H1   " <<sizeof(H1) << endl;

  // dynamic alloc

  Hero *b = new Hero;

  b->setLevel('A');
  b->setHealth(700);

  cout << "level is  " << (*b).level << endl;
  cout << "health is  " << (*b).getHealth() << endl;

  cout << "level is  " << b->level << endl;
  cout << "health is  " << b->getHealth() << endl;
  */

  return 0;

}
