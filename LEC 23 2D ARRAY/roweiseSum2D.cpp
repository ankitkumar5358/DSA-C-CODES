#include<iostream>
using namespace std;

// print row wise sum
void printSum(int arr[][3],int row, int col){
  cout << "Printing sum..."  << endl;
  for(int row=0;row<3; row++){
    int sum = 0;
    for(int col =0; col<3;col++){
      sum +=  arr[row][col] ;
    }
    cout << sum << " ";
  }
  cout << endl;
}


int main() {

int arr[3][3];
cout << "Enter the array to print " << endl;
// taking i/p
for(int row =0; row<3; row++){
  for(int col =0; col<3; col++){
    cin >> arr[row][col];
  }
}
cout << endl;
// printing o/p
for(int row =0; row<3; row++){
  for(int col =0; col<3; col++){
    cout << arr[row][col] << " ";
  }
  cout << endl;
}

printSum(arr,3,3);
/*
cout << "Enter the element to search" << endl;
int target;
cin >> target;
if(isPresent(arr,target,3,4)){
    cout << "Element Found" << endl;
}
else{
    cout << "Element Not Found" << endl;
}
*/

  return 0;
}
