#include <iostream>
using namespace std;

int factorial(int n){


if(n==0)
    return 1;

  int smallProb = n * factorial(n-1);
  int bigProb = n * smallProb;

  return bigProb;

}

int main() {

  int n;
  cin >> n;
  factorial(n);

  return 0;
}
