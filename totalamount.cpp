#include<iostream>

using namespace std;

int main() {
    int amount  = 1330;
    int x = 100;
    int y = 50;
    int z = 20;
    int a = 1;

    switch (amount)
    {
    case 'x' :
        int valuex = amount / x;
        cout << "The number of 100 rupees notes are " << valuex;
        int balance = amount - 1300;
        break;
    
    case 'y' : 
        if(y < balance){
            int valuey  = balance / y;
             cout << "The number of 50 rupees notes are " << valuey;
            break;
        }
        else{
            break;
        }
        break;
    case 'z' :
        if(z < balance){
            int valuez = balance / z;
            cout << "The number of 20 rupees notes are " << valuez;
            balance = amount - 1320;
            break;
        }
        else{
            break;
        }
    case 'a' :
        if(a < balance){
            int valuea = balance / a;
            cout << "The number of 1 rupees notes are " << valuea;
            break;
        }    
    }
}