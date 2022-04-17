#include <iostream>

using namespace std;
int main()
{
    // ! Stat pattern questions
    // 1
    /*
   int row = 1;
   int n = 4;
   while(row<=n){
       // for space
       int space = n-row;
       while(space){
           cout << " ";
           space = space - 1;
       }
       // for print star
       int col = 1;
       while(col<=row){
           cout << "*";
           col = col + 1;
       }
       cout << endl;
       row = row + 1;
   }
   */

    // 2 TODO
    /*
    int row = 1;
    int n = 4;
    while(row<=n){
        int col = 1;
        int star = n - row + 1;
        while(col<=n){
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    */
    /*
     int row = 1;
     int n = 4;
     while(row<=n){
         int star = (n - row + 1);
         while(star){
             cout << "*";
             star--;
         }
         int col = 1;
         while(col<=row){
             // cout << "";
             col++;
         }
         cout << endl;
         row++;
     }
     */
    /*
    int row = 1;
    int n  = 4;
    while(row<=n){
        int space = (row -1);
        while(space){
            cout << "";
            space = space + 1;
        }
        int col = 1;
        while(col<=row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
      */

    // !  VVIP Pattern -- #a1a5b0
    /*
    int n ;
    cin >> n;
    int row = 1;

    while(row<=n){
        // print space
        int space = (n-row);
        while(space){
            cout << " ";
            space --;
        }
        // print 1st traiangle
        int col = 1;
        while(col<=row){
            cout << col;
            col++;
        }
        // print 2nd triangle
         int start = row - 1;
         while(start){
             cout << start;
             start = start -1 ;
         }


         cout << endl;
         row++;

    }
     */

    // !  VVIP Pattern #139987

    int n = 5;
    int row = 1;
    while (row <= n)
    {
        // 1st triangle
        int first = (n - row + 1);
        while (first)
        {
            cout << first;
            first--;
        }

        // star triangle
        int col = 2;
        while (col <= row)
        {
            cout << "*"
                 << "*";
            col++;
        }
        // last triangle
        int start = (n - row + 1);
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}
