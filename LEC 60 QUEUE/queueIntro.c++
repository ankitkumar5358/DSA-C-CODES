#include<iostream>
#include<queue>
using namespace std;

// push pop and front operation

int main() {
  queue<int> q;
  q.push(2);
  q.push(4);
  q.push(6);
  q.push(8);
  q.push(10);

  cout << "size of queue -> " << q.size() << endl;
  q.pop();
  q.pop();
  q.pop();

  cout << "size of queue -> " << q.size() << endl;
  cout << "front of queue" << q.front() << endl;

  q.pop();
  cout << "front of queue" << q.front() << endl;

  if(q.empty()){
    cout << "Queue is empty" << endl;
  }
  else{
    cout << "Queue is not empty" << endl;
  }

  return 0;
}
