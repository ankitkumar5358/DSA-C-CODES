#include<iostream>
using namespace std;
int main()
{   
    /*
    Q.1 Print multiplication table of 24, 50 and 29 using loop.
    for(int i = 1; i<= 10; i++){
        cout << 24 *  i << endl;
        // cout << " 24 * " << i << "\t = \t" << 24*i << "\n";
    }
    */



    /*
    // Q . 2 Take 10 integers from keyboard using loop and print their average value on the screen.
    int sum = 0;
    for(int i = 1; i<=10; i++)
    {
        int x;
        cout <<"Enter numbers" << endl;
        cin >> x;
        sum = sum + x;
        
    }
    cout << "Average  is " << sum<< endl;
    */



    /*
    Q . 3 Print the following patterns using loop :
    a.
    *
    **
    ***
    ****
    
    
    int n = 4;
    int i = 1;
    for(i;i<=n;i++){
        int j = 1;
        for(j;j<=i;j++){
            cout << " * "; 
        }
        cout << endl;
    }
    */
    
    /*
    b.
     
     *
    ***
   *****
    ***
     *
    
    */

    int i  = 1;
    int n = 5;
    for(i;i<=n;i++){
        int j = 1;
        for(j;j<=i;j++){
            cout << "* ";
        }
        cout << "  ";
        cout << endl; 
    }



    
}
