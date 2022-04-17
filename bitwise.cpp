#include<iostream>
#include<ostream>
using namespace std;

int main(){
    int a = 2;
    int b = 6;

    cout << "a&b" << a&b; //AND
    cout << "a|b" << a|b; //OR
    cout << "~b" << ~b; // NOT
    cout << "a^b" << a^b; //XOR
    
    // RIGHT SHIFT & LEFT SHIFT
    cout << (17<<1) << endl;
    cout << (19<<2) << endl;

    cout << (17>>1) << endl;
    cout << (19>>2) << endl;

   
}