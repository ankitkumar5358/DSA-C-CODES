
#include<iostream>
using namespace std;

/************************************************************

    Following is the linked list node structure.

    class Node
    {
        public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

************************************************************/

Node * uniqueSortedList(Node * head) {
    // empty list
    if(head == NULL){
        return NULL;
    }

    // not empty list
    Node* curr = head;
    while(curr != NULL){
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data){
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        // not equal
        else{
            curr = curr -> next;
        }
    }
    return head;
}

int main() {



  return 0;
}
