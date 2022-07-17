#include <iostream>
using namespace std;

void strRev(char name[], int n){
int st = 0;
int end = n - 1;
while(st < end){
  swap(name[st++], name[end--]);
  }
}


int main() {
char name[10];
int n = 20;
cout << "Enter your name" << endl;
cin >> name;
int revName = strRev(name, n);
cout << "Your reversed name is " << revName << endl;

  return 0;
}
