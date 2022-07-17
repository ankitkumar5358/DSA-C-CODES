#include <iostream>

using namespace std;

int arithProg(int n){
    int ntharith = (3 * n) + 7;
    cout << "nth term ap is " << ntharith;

    return ntharith;
}

int main(){
    int n;
    cin >> n;
    arithProg(n);

    return 0;
}
