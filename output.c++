#include <iostream>

using namespace std;

int main()  {

    /* 
    int a = 9;

    if(a==9){
        cout << "NINEY" << endl;
    }

    if(a > 0){
        cout << "POSITIVE" << endl;
    }
    else{
        cout << "NEGATIVE";
    }
    */


   /*
   int a = 2;

   int b = a + 1;

   if((a=3)==b){
       cout << a;
   }
   else{
       cout << a+1;
   }
   */

  /*
  int a = 24;

  if(a > 20){
      cout << "MAI";
  }
  else if(a==24){
      cout << "HU";
  }
  else{
      cout << "NA";
  }
  cout << a;
    */


//    CODE QUES 1
    /*
    char ch;
    cin >> ch;
    
    if ('a'<=ch<='z')
    {
        cout << "lowercase";
    }
    else if('A'<=ch<='Z')
    {
        cout << "UPPERCASE";
    }
    else if(0<=ch<=9)
    {
        cout << "Numeric";
    }
    else
    {
        cout << "Default - Symbols";
    }
    */

    // WHILE
    // print numbers upto n
    /*
    int n = 10;
    // cin >> n;
    int i = 1;
    while(i<=n)
    {
        cout << i << " ";
        i = i + 1;
    }
    */

    /*
    // sum numbers upto n
    int n = 10;
    int i = 1;
    int sum = 0;

    while(i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Value of sum is : " << sum;
    */

    /*
    // number prime is or not
    int n = 10;

    int i = 2;

    while(i<n)
    {
        if(n%i==0){
            cout << "Not Prime for" << i <<  endl;
        }
        else{
            cout << "Prime for " << i <<  endl;
        }
        i = i + 1;
        
    }
    */

    // PATTERNS
    // print pattern for 4 start with four row and col

    

    /*
    int i = 1;
    for(i=1;i<5;i++)
    {
        cout << "*" ;
    }
    
    cout << endl;

    int j = 1;

    for (j = 1; j < 5; j++)
    {
        cout << "*";
    }
    */

    // Pattern1
    
    int n = 3;
    int i = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=n){
            cout << "*";
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
    


}   