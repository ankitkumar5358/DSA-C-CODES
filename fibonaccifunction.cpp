#include<iostream>

using namespace std;



int main() {
    int n ; 
    cin >> n;
    int a  = 0;
    int b  = 1;
 
    for(int i = 1; i<= n; i++){
        
        int nextItem = a + b;
        cout << nextItem << " ";
        a = b;
        b = nextItem;

        cout << n;
    }



    return 0;
}