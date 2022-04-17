#include <iostream>

using namespace std;


// Sort 0 1 2 -- QUestion Code Studio
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


void sortOneTwo(int arr[], int n){
    
}

int main() {

    int arr[10] ={ 0, 1, 2, 1, 2, 1, 2 };
    printArray(arr, 7);
    sortOneTwo(arr, 7);

    return 0;
}
