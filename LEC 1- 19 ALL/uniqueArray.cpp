#include <iostream>

using namespace std;


int uniqueArray(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[10] = {1,2,2,3,3,3,4,4,4,4};
    uniqueArray(arr,10 );

}