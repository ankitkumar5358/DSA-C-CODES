 #include <iostream>
using namespace std;

int main()
{
 // !  Pattern Questions
  
    // 1
    /*
    int n ;
    cin >> n;
    int i = 1;
    while (i<=n){
        int col = 1;
        while(col<=n){
            cout << " * " << " ";
            col = col+ 1;
        }
        i = i + 1;
        cout << endl;
    }
    */

   // 2
   /*
   int n;
   cin >> n;
   int i = 1;
   while(i<=n){
       int col = 1;
       while(col<=n){
           cout << i << " ";
           col++;
       }
       i++;
       cout << endl;
   }
    */

    //3
    /*
    int i =1;
    int n;
    cin >> n;
    while(i<=n){
        int col = 1;
        while(col<=n){
            cout << col;
            col++;
        }
        cout << endl;
        i++;
    }
    */

    // 4
    /*
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int col = 1;
        while(col<=n){
            cout << n - col  + 1;
            col++;
        }
        cout << endl;
        i++;
    }
    */

    // 5
    /*
    int n ;
    cin >> n;
    int i = 1;
    while (i<=n){
        int col = 1;
        while (col<=n){
            cout << col;
            col++;
        }
        cout << endl;
        i++; 
    }
    */

    // 6
    /*
   int n;
   cin >> n;
   int i = 1;
   int count = 1;
   while(i<=n){
       int col = 1;
       while(col<=n){
           cout << count << " ";
           count ++ ;
           col++;
       }
       i++;
       cout << endl;
   }
    */

   // !  7(star pattern questions ) -- trianlgular matrix
   // todo -- col will loop upto or less than i(col<=i)

   // 7
   /*
   int row = 1;
   int num;
   cin >> num;
   while (row<=num){
       int col = 1;
       while(col<=row){
           cout << " * ";
           col++;
       }
       cout << endl;
       row++;
   }
   */

  // 8
  /*
    int row = 1;
   int num;
   cin >> num;
   while (row<=num){
       int col = 1;
       while(col<=row){
          cout << row;
           col++;
       }
       cout << endl;
       row++;
   }
   */

    // 9
    /*
    int num;
    cin >> num;
    int row = 1;
    int count = 1;
    while (row <= num){
       int col = 1;
       while(col <= row){
           cout << count << " ";
           count ++;
           col++;
       }
       cout << endl;
       row++;
    }
    */

    //    10(method-1)
    /*
    int row = 1;
    int num;
    cin >> num;
    while (row<=num){
        int col = 1;
        int count = row;
        while(col<=row){
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    */
    
    //    10(method-2)
    // TODO
    /*
    int row = 1;
    int num;
    cin >> num;
    while (row <= num){
        int col = 1;
        while(col <= row){
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
    */

   // 11 
   /*
   int row = 1;
   int n ;
   cin >> n;
   while(row<=n){
       int col = 1;
       while(col<=row){
           cout << (row-col+1) << " ";
           col++;
       }
       cout << endl;
       row ++ ;
   }
   */
  // 12 (method -1 )
  /*
  int n;
  cin >> n;
  int row = 1;
  char word = 'A';
  while(row<=n){
      int col = 1; 
      while(col<=n){
          cout << word;
          col++;
      }
        word++;
      cout << endl;
      row++;
  }
*/
//  12 (method -2 )
    /*
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){
      int col = 1; 
      char ch = 'A' + row - 1;
      while(col<=n){
          cout << ch;
          col++;
      }
      cout << endl;
      row++;
     }
    */

    // 13
    /*
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){
      int col = 1; 
      char ch = 'A';
    while(col<=n){
          cout << ch ;
           ch++;
          col++;
      }
     
      cout << endl;
      row++;
     }
    */

    // 14
    /*
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    int value = 1;
    while(row<=n){
        int col = 1;
        while (col<=n){
        cout << ch;
         ch++;
        col ++ ;
        }
        row ++;
        cout << endl;
    }
    */
    // 15
    int i = 1;
    int n = 3;
    while(i<=n){
        int col = 1;
    char ch = 'A' + i +  col - 2;
        while(col<=n){
            cout << ch << " "; 
            // cout << (i+col-1) << " "; // output in number
            ch++;
            col++;
        }
        cout << endl;
        i++;
    }


}






















