#include<iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;
    while(number!=0)
    {
    int result = 0;
    int digit  = number % 10;
    result = result * 10 + digit;
    number = number / 10;
    cout << result;
    }


    }
   