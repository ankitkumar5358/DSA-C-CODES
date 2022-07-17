#include <iostream>
#include <stack>

using namespace std;

class Stack {

// properties
public:

int *arr;
int top;
int size;

// behaviour
Stack (int size) {
  this -> size = size;
  arr = new int[size];
  top = -1;
}

// 4 Operations on Stack using diff func

/* 1 ************/
void push(int element){
    if(size - top > 1){
      top++;
      arr[top] = element;
    }
    else{
      cout << "Stack Overflow" << endl;
    }

}

/* 2 ************/
void pop() {
  if(top >= 0){
    top--;
  }
  else{
    cout <<" Stack Underflow" << endl;
  }

}

/* 3 ************/
int peek() {

  if(top >= 0)
  return arr[top];
  else {
    cout << "Stack is Empty" << endl;
    return -1;
  }
}

/* 4 ************/
bool isEmpty(){
  if(top == -1){
    return true;
  }
  else{
    return false;
    }
  }
};


int main() {

Stack st(5);

st.push(22);
st.push(43);
st.push(44);

cout << st.peek() << endl;

st.pop();

cout << st.peek() << endl;

st.pop();

cout << st.peek() << endl;

st.pop();

cout << st.peek() << endl;

st.pop();

cout << st.peek() << endl;

if(st.isEmpty()) {
  cout << "Stack is Empty" << endl;
}
else{
  cout << "Stack isn't Empty" << endl;
}

/* Basic Operations
stack<int> s;
s.push(3);
s.push(7);
//s.push(5);

s.pop();

cout <<" Printing top element" << s.top() << endl;

if(s.empty()) {
  cout << "Stack is Empty" << endl;
}
else{
  cout << "Stack isn't Empty" << endl;
}
cout << "size od stack" << s.size();
*/

  return 0;
}
