#include <iostream>
using namespace std;
int main() {

/*
int arr[10] = {2,6,7};
cout << "Address of first memory block of array" << endl ;
cout << arr << endl;

cout << &arr << endl;
cout << arr[0] << endl;
// cout << *(arr[2] + 1)<< endl;
int a[20] = {1,2,3,4};
cout << a << endl;
cout << &a << endl;
cout << &a[0] << endl;
*/

// int arr[10]; // error
// arr = arr + 1;

/*
int arr[10];
int *ptr = &arr[0];
cout << ptr << endl;
ptr = ptr + 1;
cout << ptr << endl;
*/

//   ************Char Array
/*
int arr[5] = {1,2,3,4,5};
char ch[6] = "abcde";

cout << arr << endl;
cout << ch << endl;

char *c = &ch[0];
cout << c << endl;
*/

char temp = 'z';
char *p = &temp;
cout << p << endl;




  return 0;

}
