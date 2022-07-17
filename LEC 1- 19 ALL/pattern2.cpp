 #include <iostream>
using namespace std;

int main()
{


 // Q . 16
 /*
 int row = 1;
 int n;
 cin >> n;
 while(row<=n){
     int col = 1;
     while(col<=row){
     char ch = ('A' + row - 1);
         cout << ch;
        //  ch++;
         col++;
     }
     cout << endl;
     row++;
 }
  */
 // 16
 /*
 int row = 1;
 int n;
 cin >> n;
 char ch = 'A' + row - 1;
 while(row<=n){
     int col = 1;
     while(col<=row){
         cout << ch;
         ch++;
         col++;
     }
     cout << endl;
     row++;
 }
 */

// 17
/*
int row = 1;
int n;
cin >> n;
while(row<=n){
    int col = 1;
char ch = 'A' + row + col - 2;
    while(col<=row){
        cout << ch;
        ch++;
        col++;
    }
    cout << endl;
    row++;
}
*/

// 19
/*
int row = 1;
int n = 4;
while(row<=n){
char ch = 'D'  - row + 1;
    int col = 1;
    while(col<=row){
        cout << ch << " ";
        ch++;
        col++;
    }
    cout << endl;
    row++;
}
*/
// 19 - method 2
/*
int row = 1;
int n = 4;
while(row<=n){
char ch = 'A' + n - row;
    int col = 1;
    while(col<=row){
        cout << ch << " ";
        ch++;
        col++;
    }
    cout << endl;
    row++;
}
*/

//method - 2 (17)

int n = 3;
int row = 1;
while(row<=n){
    int col = 1;
        char ch = 'A' +  row - 1;
    while(col<=n){
        cout << ch << " " ;
        ch++;
        col++;
    }
    cout << endl;
    row++;
}









}