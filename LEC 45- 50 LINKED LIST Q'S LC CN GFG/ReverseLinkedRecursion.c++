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
// recursive approach2
Node* reverse1(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // processing and recursive call
    Node* smallHead = reverse1(head -> next);
    head -> next -> next = head;
    head -> next = NULL;

    return smallHead;
}

// recursive approach1
void reverse(Node* &head, Node* curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    // single case solve(processing)
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;

}

Node* reverseLinkedList(Node *head)
{
    //  Recursive approach 2
    reverse1(head);

    /* Recursive approach 1
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
    */

    /* Iterative approach
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
    */
}
