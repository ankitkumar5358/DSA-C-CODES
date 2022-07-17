#include<iostream>
using namespace std;
int main(){
      // !  for loop

    // int  i = 0;
    // for(;i<=5;){
    //     cout << i << endl;
    //     i++;
    // }

    // sum upto n
    /*
    int sum = 0;
    int n;
    cin>>n;
    for(int i =2;i<n;i++){
        sum = sum + i;
    }
        cout << sum << endl;
    */

    // fibonacci series
    /*
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i<= n;i++){
        int nextNumber = a + b ;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
    */
    
    // prime number
    /*
    int n = 9;
    for(int i=2; i<n; i++){
        if(n%i==0){
            // rem 0
            cout << "Not Prime" << endl;
            break;
        }
            // rem not 0 
        else{
            cout <<"Prime" << endl;
        }
        i++;
    }
    */
   
   /*
  for(int i = 0; i<= 15; i+= 2){
      cout << i << " "; // 0 3 5 7 9 11 13 15 
      if(i&1){
          continue;
      }
      i++;
  }
  */

/*
 for(int i=0;i<5;i++){
     for(int j=1;j<=5;j++){
         cout << i << " " << j << endl;
     }
 }
 */
/*
 for(int i=0;i<5;i++){
     for(int j=1;j<=5;j++){
         if(i+j == 10){
             break;
         }
           cout << i << " " << j << endl;
     }
       
 }
 */







}