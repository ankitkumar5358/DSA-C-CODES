#include <iostream>
using namespace std;

class Node {

public:
  int data;
  Node* next;

  //constructor
  Node(int d){
    this -> data = d;
    this -> next = NULL;
  }

  // destructor
  ~Node() {
    int value = this -> data;
    if(this -> next != NULL){
      delete next;
      next = NULL;
    }
    cout << "Memory free for node with data " << value << endl;
  }

};

void insertNode(Node* &tail, int element, int d){

  // empty list
  if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
  }

  // non empty list
  else{
    // assuming element present in list
    Node* curr = tail;
    while(curr-> data != element){
      curr = curr -> next;
    }

    //element found -> curr is representing  element node
    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;
  }

}

// print node
void print(Node* tail){

  Node* temp = tail;
  //empty list
  if(tail == NULL){
    cout << "List is empty" << endl;
    return;
  }
  do {
    cout << tail -> data << " ";
    tail = tail -> next;
  }
  while(tail != temp);
  cout << endl;

}

void deleteNode(Node* &tail, int value){

  // empty list
  if(tail == NULL){
    cout << "List is empty, check again"<< endl;
    return;
  }
  else{
    // assume that element is present in list
    // non-empty list
    Node* prev = tail ;
    Node* curr = prev -> next;

    while(curr -> data != value){
      prev = curr;
      curr = curr -> next;
    }
    prev -> next = curr -> next;
    // 1 node liked list
    if(curr == prev){
      tail = NULL;
    }

    // >=2 node linked list
    else if(tail == curr){
      tail = prev;
    }
    curr -> next = NULL;
    delete curr;

  }

}



// circular and detect loop
/*
bool detectLoop(Node* head){

  if(head == NULL)
    return false;

  map<Node*, bool> visited;

  Node* temp = head;

  while(temp != NULL){

    // cycle is present
    if(visited(temp) == true){
      cout << "Present on Element" << temp->data<< endl;
      return true;
    }

    visited(temp) = true;
    temp = temp -> next;
  }
  return false;
}
*/







// ***********************************************************************//

int main()
{
  Node* tail = NULL;

  insertNode(tail,5,3);
  print(tail);

  insertNode(tail,3,5);
  print(tail);

  insertNode(tail,5,7);
  print(tail);

  insertNode(tail,7,9);
  print(tail);

  insertNode(tail,9,11);
  print(tail);

  insertNode(tail,11,13);
  print(tail);

  insertNode(tail,13,15);
  print(tail);

  deleteNode(tail,3);
  print(tail);


  if (floydDetectLoop(head)){
      cout << "Cycle  is Present" << endl;
  }
  else{
      cout << "Cycle  is not Present" << endl;
  }

  return 0;
}
