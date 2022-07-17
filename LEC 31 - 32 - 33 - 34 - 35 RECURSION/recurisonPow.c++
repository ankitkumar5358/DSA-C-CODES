#include <iostream>
using namespace std;

int power(int n){

  // base case
  if(n==0)
  return 1;

  int smallProb = power(n- 1);
  int bigProb = 2 * smallProb;

    return bigProb;

// short code
// return 2 * power(n-1);


}

int main() {

  int n;
  cout << "Enter the  value to find power"  << endl;
  cin >> n;
  int ans = power(n);
  cout << ans;





  return 0;
}
