#include<iostream>
#include<math.h>
using namespace std;

int main()
{

/*

cout << "Unsigned char" << endl;; 
cout << " Left and Right Shift Operator" << endl;

unsigned char a = 104, b = 124;
cout << (a>>3) << endl;
cout << (a<<3) << endl;

*/

//Binary to Decimal COnversion

/*
int n = 1010110;
int i = 0, ans = 0;
while(n!=0){
    int bit = n % 10;
    if(bit==1){
        ans = ans + pow(2,i);
        
    }
    n = n / 10;
    i++;
}
cout << "Answer is : " << ans;
*/

int n = 0110011;
int i = 0, ans = 0;

while (n!=0){
    int bit = n % 10;
    if(bit==1){
        ans  = ans + pow(2,i);
    }
    n = n / 10;
    i++;
}
cout << " Answer is : " << ans;


    



}
