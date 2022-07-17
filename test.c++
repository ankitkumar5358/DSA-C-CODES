#include <iostream>
#include<math.h>

using namespace std;

int IsPrime(int n) {
   for(int i=2;i<=sqrt(n);i++)
    if(n%i == 0)
    {
      cout << "Not Prime " ;
      return 0;
    }
    cout << "Prime";
      return 1;
}

int main() {

  int n;
  cin >> n;
  IsPrime(n);

  return 0;
}
