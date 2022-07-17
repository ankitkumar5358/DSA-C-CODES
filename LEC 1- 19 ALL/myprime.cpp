#include<iostream>
using namespace std;

int main() {
    int n = 11;
    for(int i  = 2; i<= n; i++){
        if(n%2==0){
            cout << "not prime" << endl;
            break;
        }
        else{
            cout << endl;
            cout << "prime";
        }
    }
}