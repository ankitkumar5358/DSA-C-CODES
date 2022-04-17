#include <iostream>

using namespace std;

int LinearSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true; // 1
        }
    }
    return false; // 0

}

int main() {

    int arr[10] = {1, 4, -2, 90, 10, 22, -1, 0, 200, 5};
    int key;
    cout << "Enter the key to find in array" << endl;
    cin >> key;

    bool found = LinearSearch(arr, 10, key);

    if(found){
        cout << "Present" ;
    }
    else{
        cout << "Absent";
    }



}