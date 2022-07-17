#include<iostream>
using namespace std;
int main() {
    int n = 123;
    
    int first = n % 10;
    n /= 10;

    int second = n % 10;
    n /= 10;
    
    int third = n % 10;
    n /= 10;

    // int reversedInt;
    // cout << reversedInt <<first << second << third;
    cout  <<first << second << third;
}