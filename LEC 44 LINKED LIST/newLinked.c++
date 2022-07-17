#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }

};

void insertAtHead(Node* &head, int data){
  Node* temp = new Node(23);
  while(temp != NULL){
    temp -> next = head;
    head = temp;
  }
}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data ;
    cout << temp -> next ;
  }
  cout << endl;
}


int main() {
  cout << "Insert Node at head in Linked List" << endl;
  Node* node4 = new Node(43);
  Node* head = NULL;
  // Node* node1 = new Node(80);
  // cout << node4 -> data << endl;
  // cout << node4 -> next << endl;
  insertAtHead(head, 29);
  insertAtHead(head, 87);
  print(head);
  return 0;
}
