#include<iostream>
using namespace std;

// ! 1 - prime
// ! 0 - not prime

bool isPrime(int n){

    for(int i = 2; i<n ; i++) {
        // not a prime number, n is divided
        if(n%2 == 0) {
            return 0;
        }
    }
    // prime number
    return 1;

}

int main() {
    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "is a prime number" << endl;
    }else{
        cout << "is not  a prime number" << endl;

    } 


    return 0;
}