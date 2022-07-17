#include<iostream>

using namespace std;

void printArray(int arr[] , int size){

    cout << "printing array" << endl;
    
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
       
    }
    cout << "printing done";
      cout << endl;
}

int main() {

/*
    int array[2] = {1,2};
    cout << array << endl;

    int arraya[2] = {3,4};
    cout << arraya << endl;     

    int num[5000] = {0};
    cout << num << endl;

    int number[7] =  {1,2,3,4,5,6,7};
    cout << number[8];
*/


/*    int first[10] = {1};

    int n = 10;
  
    for(int i = 0; i<n ; i++){
        cout << first[i] << " ";;
    }
*/

   
   /*
    int size  = 6;
    int val = 6;

    int arr[size];
    int i;

    cout << endl;

    for(i = 0 ; i< size; i++){
        arr[i] = val;
    }

    cout << " The array is" << endl;
    for(i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

*/

    /*
    int third[15] = {2,7};

    int n = 15;
    for(int i = 0; i<n; i++){
        cout << third[i] << " ";
    }
    */
    cout << endl;

    // initialize all elements with 0

    /*
    int forth[10] = {0};
    n = 10;
    cout << "printing array" << endl;
    
    for(int i = 0; i<n; i++){
        cout << forth[i] << " ";
    }
    */


    int forth[10] = {0};
    printArray(forth, 10);

    int fifth[10] = {1};
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout <<"Size of fifth is " << fifthSize << endl;;


    char ch[5] = {'a','b','c','d','e'};
    // printing ch array
    for(int i = 0; i<5; i++){
        cout <<  ch[i] << " ";
    }
    

    // printArray(ch, 5);



    return 0;

}