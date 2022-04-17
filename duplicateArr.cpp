#include <iostream>

using namespace std;


int main() {
    int ans = 0;
    int size = 5;
    int arr[5] = {1,2,3,2,4};

    for(int i =0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }

    cout << ans;

    return 0;
}