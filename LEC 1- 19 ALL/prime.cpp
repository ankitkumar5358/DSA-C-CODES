#include<iostream>
using namespace std;
int main()
{
    bool isPrime = 1;
    int n;
    cin >> n;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            break;
            isPrime = 0;
        }
    if(isPrime == 0){
        cout << "Not a Prime";
    }else{
        cout << "A Prime";
    }
}



}