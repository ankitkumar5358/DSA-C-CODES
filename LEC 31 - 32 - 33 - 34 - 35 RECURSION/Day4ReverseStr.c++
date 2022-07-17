#include <iostream>
using namespace std;

void reverse(int i, int j,string& str){

  // base case
  if(i>j){
    return ;
  }

  // processing
  swap(str[i], str[j]);
  i++;
  j--;

  // Recursive Call
  reverse(i,j,str);

}

int main() {
  // int i = 0;
  // int j = str.length() -1 ;
  string name = "ankit";

  reverse(0,name.length()-1,name);

  cout << name << endl;


  return 0;
}
