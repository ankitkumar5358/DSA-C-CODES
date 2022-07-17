#include <iostream>
using namespace std;

int main() {

    cout << "0" << " ";
    int n = 5;
    for(int i = 1;i<n;i++){
        cout << "1" << " ";
        for(int j=1; j<n; j++){
            cout << "2" << " ";
            for(int k=1; k<n; k++){
                cout << "3" << " ";
            }  
            cout << "4" << " ";
                // cout << endl;
        }
        cout << "5" << " ";
    }
    cout << "6" << " ";
}