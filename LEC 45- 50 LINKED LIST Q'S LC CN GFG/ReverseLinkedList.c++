#include<iostream>
using namespace std;


// solution using iterative approach


class Node
  {
  public:
	     int data;
	     Node *next;
	   Node(int data){
	      this->data = data;
	      this->next = NULL;
	     }
  };


Node* reverseLinkedList(Node *head)
{
   // base case for 0 or 1 element in list
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    // tranversal of list
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


int main() {


  return 0;
}
