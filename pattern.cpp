#include<iostream>

using namespace std;

int main()

{
    /* 1.
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout <<   j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

   /* 2.
    int n = 3;
        int i = 1;

        while(i<=n){
            int j = 1;
            while(j<=n){
                cout << j;
                j = j + 1;

            }
            cout << endl;
            i = i + 1;
        }

   */   
        
    /* 3.
       int n = 3;
   int i = 1;

   while (i<=n){
       int j = 1;
       while(j<=n){
           cout << (n-j+1);
           j = j + 1;
       }
       cout << endl;
       i = i + 1;
   }
    */

   
    /* 4.
    int n = 3;
    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while (j<=n){
           
        cout << count ;
        count = count + 1;
        j = j + 1;
       }
       cout << endl;
       i = i + 1;
       
   }   

    */

    /*
    5.
       int n = 4;
   int row = 1;
   while(row<=n)
   {
       int col = 1;
       while(col<=row)
       {
           cout << "*" << " ";
           col = col + 1;      
        }
       cout << endl;
       row = row + 1;
   }
    */
   
   /* 6.
       int n = 4;
   int row = 1;
   while(row<=n){
       int col = 1;
       while(col<=row){
            cout <<  row << " ";
            col = col + 1;
       }
       cout << endl;
       row = row + 1;
   }
   */

  /* 7.
        int n = 4;
    int row = 1;
    int count = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << count  << " ";
            count = count + 1;
            col = col + 1;
        } 
        cout << endl;
        row = row + 1;
    }

  */ 

  /* 8.
    int n = 4;
   int row = 1;
   
   while(row<=n){
       int col = 1;
       int count = row;
       while(col<=row){
           
           cout << count ;
           count = count + 1;
           col = col + 1;

       }
       cout << endl;
       row = row + 1;
   } 
    /* 9. Alternate of pattern 8
        int n = 4;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << ( row + col -1);
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    } 
    */
    
    /* same as question 8
        int n = 4;
    int row = 1;
    int value = 1;
    while(row<=n){
        int col = 1;
        
        while(col<=row){
            cout << value << " "; 
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    */

    /* 10.
        int n = 4;
    int row = 1;
    
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row - col + 1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    */

    /* 11.
        int n = 3;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch  = 'A' + row - 1 ;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
        
    }

    */


    /* 12.
        int n = 3;
    int row = 1;

    while(row<=n){
        int col = 1;
        while(col<=n){
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row  = row + 1;
    }
    */


    /* 13.
     int n = 4;
    int row = 1;

    while(row<=n){
        int col = 1;
        // int value  = 1;
        while(col<=row){
            char value = 'A';
            cout << value << " ";
            value = value + 1;
            // char ch = 'A' + col - 1;
            // cout <<  ch << " ";
            col = col + 1;
        }
        cout << endl;
        row  = row + 1;
    }

    */
   





    /* 19 .
       int n = 4;
   int row = 1;
   while(row<=n){
       int space = n - row;
       while(space){
           cout << " ";
           space = space - 1;
       }
       int col = 1;
       while(col<=row){
           cout << "*" <<"  ";
           col = col + 1;
       }
       cout << endl;
       row = row + 1;
   }

    */

    /* 20.
    

    */
    int n = 4;
    int row = 1;
    while(row<=n){
        int space = row - 1;
        while(space){
            cout << " ";
            space = space + 1;
        }
        int col = 1;
        while(col<=n){
            cout << row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;

    }

    /* 25.
    int n = 4;
    int row = 1;
    while(row <= n){
        //print space
        int space = n - row;
        while(space){
            cout << " ";
            space = space + 1;

        }
        //print second triangle
        int col = 1;
        while(col<=row){
            cout << col;
            col = col + 1;

        }
        // print third triangle
        int start = row - 1;
        while(start){
            cout << start ;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
   

    */
    
}



























































































































