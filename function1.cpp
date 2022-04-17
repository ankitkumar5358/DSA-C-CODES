#include<iostream>
using namespace std;

// ! 1 -> even
// ! 0 -> odd
bool isEvenOdd(int a){
    //odd
    if(a&1) {
        return 0;
    }
    //even
    else{
        return 1;
    }
}


int main () {
    int num;
    cin >> num;
    if (isEvenOdd(num)) {
           cout << "Answer is Even ";
    }
    else{
         cout << "Answer is Odd ";
    }
 
    return 0;
}