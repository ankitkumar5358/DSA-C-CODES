#include <iostream>
using namespace std;

int main() {
    //Write your code here
    float principal;
    float rate;
    float time;
    cin >> principal ;
    cin >> rate ;
    cin >> time;
//     cin >> amount ;
//     cin >> rate_of_interest;
//     cin >> time_peroid;
//     float simple_interest = (amount * rate_of_interest * time_peroid ) / 100;
    float simple_interest = (principal * rate * time ) / 100;
    cout << simple_interest;

    return 0;
}
