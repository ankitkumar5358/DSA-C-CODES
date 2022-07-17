#include <iostream>
#include <algorithm>
#include <vector>

int rotate(vector<vector<int>>& matrix) {

       int n = matrix.size();
       int m = matrix[0].size();
       reverse(matrix.begin(), matrix.end());
       for(int i = 0; i<n ; i++){
         for(int j= i+1; j<m; j++){
           swap(matrix[i][j],matrix[j][i]);
         }
       }
       
}

using namespace std;

int main() {

vector<vector<int>>& matrix = {1,2,3,4,5,6,7,8,9};

int n = matrix.size();
int m = matrix[0].size();
rotate(matrix);

  return 0;
}
