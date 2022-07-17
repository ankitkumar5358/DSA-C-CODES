#include <iostream>
using namespace std;

class Node {

public:

  int data;
  Node* next;

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }

void reverseLL(Node* head){

  // base case
if(head == NULL || head -> next == NULL){
  return head;
}
 // processing or recursive call
 rest = reverseLL(head -> next);
 head -> next -> next = head;
 head->next = NULL;

 return rest;
}

};


int main() {
  Node* node1 = new Node(10);

  return 0;
}
