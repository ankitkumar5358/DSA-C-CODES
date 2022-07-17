#include<iostream>
using namespace std;
int main(){
    /*
    int row = 1;
    int n = 5;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    */
   /*
   int row = 1;
   int n = 5;
   while(row<=n){
   int start = 1;
       int col = 1;
       while (col<=row){
           cout << start;
           start++;
           col++;
       }
       cout << endl;
       row++; 
   }
   */
  /*
  int row = 1;
  int n = 5;
  while(row<=n){
    int col = 1;
    while(col<=row){
    char ch = 'A' + row - 1; 
        cout << ch;
          ch++;
          col++;
      }
      cout << endl;
      row++;
  }
  */
    /*
    int row = 1;
    int n = 5;
    while(row<=n){
        int col = 1;
        int start = (n-row+1);
        while(start){
            cout << "*";
            start--;
        }
        while(col<=n){
            col++;
        }
        cout << endl;
        row++;
    }  
    */
   /*
   int row ;
   cin >> row;
   while(row>=1){
        int col = 1;
       while(col<=row){
           cout << col;
           ++col;
       }
       cout << endl;
       --row;
   }
   */

    /*
    int n = 5;
    int row  = 1;
    while(row<=n){
        int space = (n - row);
        while(space){
            cout << " ";
            space --;
        }
        int col = 1;
        while(col<=row){
            cout << "*";
            col ++;
        }
        int start = row -1 ;
        while(start){
            cout << "*";
            start--;
        }


        cout << endl;
        row++;
    }
    */
   



}