#include <iostream>
#include<cmath>
using namespace std;

int main() {

    // int num = 2;
    char name = '4';
    
    switch (name)
    {
    case 1:
        cout << "First";
        break;

    case 3: 
        cout << "Second";
        break;

    case 2 :
    cout << "Third";
    break;

    case '4' : 
    cout << "My Case";
    break;        
    
    default:
    cout << "Default Case";
        break;
    }
    cout << endl;
    int a = 3;
    int ans = pow(a, 2);
    cout << " Power is :" << ans;


    return 0;
}