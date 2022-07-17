#include<iostream>
using namespace std;
int main() {    






  int row = 1;
  int n  = 4;
  while(row<=n){
      int space = (row -1);
      while(space){
          cout << " ";
          space = space - 1;
      }
      int col = 1;
      while(col<=row){
          cout << "*";
          col--;
      }
      cout << endl;
      row++;
  }















}