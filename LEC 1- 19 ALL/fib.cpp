#include <iostream>

using namespace std;

int main() {

    int n = 10;
    // cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i<= n; i++){ 
        int newNum = a + b;
        cout << newNum << " ";
        a = b;
        b = newNum;
        newNum++;
        
    }

    return 0;

}