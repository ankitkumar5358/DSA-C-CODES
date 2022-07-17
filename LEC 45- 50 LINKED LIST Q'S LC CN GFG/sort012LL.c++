/********************************
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

********************************/
void insertAtTail(Node* tail, Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    /*  Approach -2 */
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr != NULL){
        int value = curr -> data;
        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr -> next;
    }


    /* Approach -1
    int zeroCount = 0;
    int oneCount = 1;
    int twoCount = 2;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0)
            zeroCount++;
        else if(temp -> data == 1)
            oneCount++;
        else if(temp -> data == 2)
            twoCount++;

        temp = temp -> next;
    }

    temp  = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 1){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 2){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
    return head;
    */

}
