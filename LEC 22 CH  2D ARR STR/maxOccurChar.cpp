#include <iostream>
using namespace std;

char getMaxOccur(string str){
             int arr[26] = {0};
        for(int i=0 ; i<str.length(); i++){
            char ch = str[i];
            int num = 0;
            if(ch >= 'a' && ch <= 'z'){
                num = ch - 'a';
            }
            else{
                num = ch - 'A';
                }
                arr[num]++;
            }
            int maxi = -1 , ans = -1;
            for(int i =0; i<26; i++){
                if(maxi < arr[i]){
                    ans = i;
                    maxi = arr[i];
                }
            }
            char finalAns = 'a' + ans;
            return finalAns;
    }
            

int main(){

      string str;
      cin >> str;
      getMaxOccur(str);


      return 0;
}