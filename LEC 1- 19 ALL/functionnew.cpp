#include<iostream>
using namespace std;

int power(int num1 , int num2) {
    int ans = 1;
    for(int i = 1; i <= num2; i++){
        ans = ans * num1;
    }
    return ans;
}


int main() {
    int a , b;
    cin >> a >> b;

    int answer = power(a,b);
    cout << "Power is " << answer;

    int c,d;
    cin >> c >> d;

    answer = power(c,d);
     cout << "Power is " << answer;

    return 0;
}


/*
    int a , b;
    cin >> a >> b;
    int ans = 1;
    for(int i  = 1; i<= b; i++){
        ans = ans * a;
    }
        cout << " Power is " << ans;
*/