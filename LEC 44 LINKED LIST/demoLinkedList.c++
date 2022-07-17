#include<iostream>
using namespace std;

class Node {

public:
  int data;
  Node* next;

  // constructor
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }

};

void insertAtHead(Node* &head, int data){

  while(head != NULL){
    Node* temp = new Node(10);
    temp -> next = head;
    head = temp;
  }
}

void print(Node* &head){

  Node* temp = head;

  while(temp != NULL){
    cout << temp -> data << endl;
    cout << temp -> next << endl;
  }
}



int main() {

  Node* node1 = new Node(10);
  Node*  head = node1;


  cout << node1 -> data << endl;
  cout << node1 -> next << endl;

  insertAtHead(head, 15);
  cout << "1" << endl;
  print(head);
  cout << "2" << endl;

  return 0;
}
