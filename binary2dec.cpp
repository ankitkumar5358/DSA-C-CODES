#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /*
    int n = 1011001;
    int i  = 0, ans = 0;
    while(n!=0){

        int bit =  n%10;
        
        if(bit==1){
        
            ans = ans + pow (2,i );

        }
            n = n / 10;
            i++;
        
    }
    cout << " Answer is : " << ans ;
    */

    /*
    int n = 000010011011;
    int i = 0, ans = 0;
    while(n!=0){
        int bit = n % 10;
        if(bit==1){
            ans = ans + pow(2, i);

        }
        n = n / 10;
        i++;
    }
    cout <<" Binary to Decimal Conversion is : " << ans;
    */

    int n = 1010101011;
    int ans = 0, i = 0;
    while(n!=0){
        int bit = n % 10;
        if(bit == 1){
            ans = ans + pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout << " B2D Conversion is : " << ans; 


}