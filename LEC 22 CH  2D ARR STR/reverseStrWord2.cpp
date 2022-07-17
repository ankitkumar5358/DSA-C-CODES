#include <iostream>
#include<bits/stdc++.h> 
#include <string>
using namespace std;

 string reverseWords(string greet) {
        int len = greet.length();
        int n = len - 1;
        int i = 0;
        while(i<=n){
              //swap
              swap(greet[i],greet[n]);              
              i = i + 1;
              n = n - 1;
        }
        return greet;
}

int main() {

      string greet = "half the length";
      // cout << "Enter the string " << endl;
      // cin >> greet;

      cout << "Your string  are " << greet << endl;
      string revStr = reverseWords(greet);
      cout << "Your reverse words string are " << endl;
      cout << revStr;

      return 0;
}