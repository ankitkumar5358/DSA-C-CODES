#include <iostream>

using namespace std;

int fibo(int n) {
    int a = 0;
    int b = 1;
    cout << a  << " " << b << " ";
    for(int i = 1; i <= n; i++){

        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }

}


int main() {
    int n;
    cin >> n;
    fibo(n);

}