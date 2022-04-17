#include<iostream>

using namespace std;

int main()
{

    /* 
    //2.Print TABLE OF 10
    int n = 10;
    
    int i = 1;

    for(i = 1 ; i <= n ; i ++)
    {
        cout << i * 10 << endl ;
    }
    */
    
   
    /*
   
    // 2.Execute a program of for loop from 10-20
    for(int a = 10; a<=20; a+=1){
        cout << "Value of a " << a << endl;
    }
   
    */

   /*

   int n = 5;
   int i = 1;
   cout << "Print Numbers from 1 to n :" << endl;
   for(; ;){
       if(i<=n){
           cout << i << endl;
       }
       else{
           break;
       }
       i++;
   } 
    //  Here we can also use 2 or many variables inside for loop
   
   */
    
    //sum of no upto n
    /*
    int n = 10;
    int sum = 0;
    
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout << sum << endl;

}   
    */

     /*     
    //fibonacci series

    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    int sum = 1;
    for(int i = 1 ; i<=n ; i++){
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
    */

    /*
    // Prime Number
    int n = 113;

    bool isprime = 1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime==0){
        cout << " Number is not Prime" << endl;
    }
    else{
        cout << " Number is Prime";
    }

    */
   
    //*******************************----5 For Loop Questions----*************************************//
   
    /*
    for(int i =0;i<=5;i--){
        cout << i << " ";
        i++;
    }
    */

    /*
    for(int i=0;i<=15;i+=2){
        cout << i <<" ";
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