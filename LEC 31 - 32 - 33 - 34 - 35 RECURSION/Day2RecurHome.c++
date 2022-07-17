#include <iostream>
using namespace std;

void reachHome(int src, int dest){

  // print drc and dest in each call stack
  cout << "Source = " << src  << " " << "Destination = " << dest << endl;

  // base case
  if(src == dest){
    cout << "Reached Home" << endl;
    return ;
  }

  // processing
  src++;

  // recursive relation
  reachHome(src,dest);

}


int main() {
  
  int src = 1;
  int dest = 10;

  reachHome(src,dest);

  return 0;
}
