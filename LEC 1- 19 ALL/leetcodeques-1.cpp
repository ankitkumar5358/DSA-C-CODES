#include<iostream>
using namespace std;
int main(){

// ! first approach
/*
    int n  = 234;
    int third = n % 10;
    n /= 10;
    int second = n % 10;
    n /= 10;
    int first = n % 10;
    n /= 10;
    // cout << first << " " << second << " " << third;
    // cout << third << " " << second << " " << first;
    int product = first * second * third;
    int sum = first + second + third;
    int result = product - sum;
    cout << result;
*/
// ! second approach
int n = 234;
int prod = 1;
int sum = 0;
while(n!=0)
{
    int digit = n % 10;
    prod = prod * digit;
    sum = sum + digit;

    n = n / 10;
}
int answer = prod - sum;
cout << answer;


}

