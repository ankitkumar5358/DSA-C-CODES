#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }
}


void alternateArray(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }

}

int main() {

    int even[8] = {2,4,6,8,10,12,14,16};
    int odd[5] = {1,3,5,7,9};

    alternateArray(even, 8);
    printArray(even, 8);
    
    cout << endl;
    
    alternateArray(odd, 5);
    printArray(odd, 5);


    return 0;
}