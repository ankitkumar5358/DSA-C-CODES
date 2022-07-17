/*
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int getLength(string s){
      int count = 0;
      for(int i=0; i<='\0';i++){
            count ++;
      }
      return count;
}

int main() {
      string s;
      cout << "Enter  your string " <<endl;
      cin >> s;
      int len = getLength(s);
      cout << len;



      return 0;
}
*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string reverse(string s){
    int st = 0;
    int e = s.size() - 1;
    while(st<e){
        swap(s[st++], s[e--]);
    }
}

int getLength(string s){
      int count = 0;
      for(int i=0; s[i] !='\0';i++){
            count ++;
      }
      return count;
}

int main() {
      string s;
      cout << "Enter  your string " <<endl;
      cin >> s;
      int n = 5;
      int len = getLength(s);
      cout << len;
      string rev = reverse(s);
      cout << "Reverses string " << rev;


      return 0;
}