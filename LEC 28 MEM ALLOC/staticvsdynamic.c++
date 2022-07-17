#include <iostream>

using namespace std;


/*
void update1(int n){
n++;
}

void update2(int& n){
n++;
}
*/

int getArrSum(int* arr,int n){
  int sum = 0;
  for(int i=0; i<=n; i++){
    sum += i;
  }
  cout << sum;
}

int main() {

int n;
cin >> n;

// create dynamic array
int* arr= new int[n];

// take array as i/p

for(int i=0; i<=n; i++){
  cin >> arr[i];
}

getArrSum(arr, n);








/*
int n = 5;
cout << "Before" << n << endl;
update1(n);
cout << "After" << n << endl;

cout << "********************" << endl;


cout << "Before" << n << endl;
update2(n);
cout << "After" << n << endl;





int i = 5;
int  j = i;

cout << i << endl;
i++;
cout << i << endl;
j++;
cout << i << endl;
cout << j << endl;
*/














  return 0;
}
