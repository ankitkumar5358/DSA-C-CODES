#include<iostream>
using namespace std;

int update(int a){
    int ans = a * a ;
    return a;
}

int main() {
    int a = 14;
    a = update(a);
    cout << "The value of a is " << a;
}