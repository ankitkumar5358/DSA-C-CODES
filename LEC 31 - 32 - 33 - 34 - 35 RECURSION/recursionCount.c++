#include <iostream>
using namespace std;

void print(int n){

  // base case
  if(n==0){
  return ;
}
  cout << n << endl;
  // recursive relation
  print(n-1);



}

int main() {

    int n;
    cout << "Enter the  value to print number"  << endl;
    cin >> n;
    print(n);

    return 0;

}
