#include <iostream>
using namespace std;

bool checkPalindrome(int i, int j, string str){
  // base case
  if(i>j)
  return true;

  // processing and R.R
  if(str[i] != str[j]){
    return false;
  }
  else{
    return checkPalindrome(i+1,j-1,str);
  }

}

int main() {
  string name = "abba";
  bool isPalindrome = checkPalindrome(0,name.length()-1,name);

  if(isPalindrome){
    cout << "Palindrome" << endl;
  }
  else{
    cout << "Not Palindrome" << endl;
  }

  return 0;
}
