#include <iostream>
using namespace std;

int factorial(int n){

// base case - mandatory becoz it tell when to stop
  if(n==0)
    return 1;

  int smallProb = factorial(n-1);
  int bigProb = n * smallProb;
  return bigProb;

// return n * factorial(n-1);
}

int main() {

  int n;
  cout << "Enter the value to find factorial" << endl;
  cin >> n;
  int ans = factorial(n);
  cout << ans << endl;
  return 0;
}
