#include<iostream>
using namespace std;

int main(){
    /*
    int a = 2;
    int b = 6;

    
    cout << "a&b" << a&b; //AND
    cout << "a|b" << a|b; //OR
    cout << "~b" << ~b; // NOT
    cout << "a^b" << a^b; //XOR
    */


    // RIGHT SHIFT & LEFT SHIFT
    /*
    cout << (17<<1) << endl;
    cout << (19<<2) << endl;

    cout << (17>>1) << endl;
    cout << (19>>2) << endl;
    */

    //Pre and Post Increment
   
    /*

    int i = 7;
    
    cout << i++ << endl;
    cout << ++i << endl;
    cout << i-- << endl;
    cout << --i << endl;
    
    int j = 19;

    cout << j++ << endl;
    cout << ++j << endl;
    cout << j-- << endl;
    cout << --j << endl;

    */
    
    // Increment Logic Questions

    /* Q.1
    
   int a, b=1;
    a = 10;
    if(++a)
        cout << b;
    else
    cout << b;
    
    */

    /* Q.2

    int a = 1;
    int b = 2;

    if(a-- > 0 && ++ b > 2){
        cout << "Stage 1 - Inside If" << endl;
    }
    else{
        cout << "Stage 2 - Inside Else" << endl;
    }
    cout << a << " " << b << endl;
    */

    /* Q.3
    
    int number  = 3;
    cout << (25 * (++number) );
    
    */


    /* Q.4

    
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << " ";
    cout << c;


    */

    int a = 1;
    int b = 2;

    if(a-- > 0 || ++ b > 2){
        cout << "Stage 1 - Inside If" << endl;
    }
    else{
        cout << "Stage 2 - Inside Else" << endl;
    }
    cout << a << " " << b << endl;


    
    /* Q.5

    */

}