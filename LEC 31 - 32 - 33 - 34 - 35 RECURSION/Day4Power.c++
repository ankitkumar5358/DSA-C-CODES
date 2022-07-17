#include <iostream>
using namespace std;

int power(int a, int b){

  // base case
  if(b==0)
  return 1;

  if(b==1)
  return a;

  // recursive call
  long long int ans = power(a,b/2);

  // if b is even
  if(b%2==0)
  return ans*ans;

  // if b is odd
  else{
    return a * ans * ans;
  }
}

int main() {

  int a;
  cout << "Enter value of a" << endl;
  cin >> a;

  int b;
  cout << "Enter value of b" << endl;
  cin >> b;


  int powerValue = power(a,b);
  cout << "Power  a ^ b is " << powerValue;

  return 0;
}
