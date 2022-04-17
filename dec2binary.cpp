#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    /*
    int n = 23;
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;

        ans = (bit * pow(10,i))+ans;

        n = n >> 1;
        i++;
    }
    cout << " Answer is : " << ans << endl;
    */

    /*
    int n = 18;
    int ans = 0;
    int  i = 0;
    
    while(n!=0){
    
        int bit = n & 1  ;

        ans = (bit * pow (10 ,i) ) + ans;
        
        n = n >> 1;

        i++;
    }
    cout << " Binary Conversion is : " << ans;
    */


    int n = 1221;
    int i = 0, ans = 0;
    while(n!=0){
        int bit = n&1;
        ans = bit * pow(10,i) + ans;
        n = n >> 1;
        i++;
    }
    cout << " Answer is : " << ans;

}