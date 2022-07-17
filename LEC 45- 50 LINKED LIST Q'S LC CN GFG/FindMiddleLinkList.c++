#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
// recursive approach
Node* getMiddle(Node* head){
    // base case - 0 or 1 node
    if(head == NULL || head -> next == NULL)
        return head;

    // 2 node -- not needed

//     if(head -> next -> next == NULL)
//     {
//         return head -> next;
//     }

    // processing and recursion
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;

}

int getLength(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}


Node *findMiddle(Node *head) {
     // recursive approach 2
    getMiddle(head);

    /*
    Iterative approach 1

    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp -> next;
        cnt++;
    }
    return temp;
    */
}
