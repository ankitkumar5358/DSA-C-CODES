#include <iostream>
using namespace std;

int main() {

int n;
cout << "Enter the no of row" << endl;
cin >> n;


// creating 2d array
int** arr = new int*[n];
for(int i=0; i<n; i++){
arr[i] = new int[n];
}


// taking 2d array i/p
for(int i=0; i<n ;i++){
  for(int j=0; j<n;j++){
  cin >> arr[i][j];
  }
}

cout << "The 2d array are : " << endl;
// printing o/p
for(int i=0; i<n ;i++){
  for(int j=0; j<n;j++){
  cout << arr[i][j] << " ";
  }
  cout << endl;
}

// releasing memory
for(int i=0; i<n; i++){
  delete [] arr[i];
}
delete []arr;


  return 0;
}
