#include<iostream>

using namespace std;

void passbyvalue(int n) {

    n++;
    cout << " number n is " << n;
   
    cout << endl;
}

int main() {

    int n;
    cin >> n;

    passbyvalue(n);
    cout << "The number n is " << n;

    return 0;
}