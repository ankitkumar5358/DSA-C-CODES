#include <iostream>
#include <map>
using namespace std;

class Node{

public:
  int data;
  Node* next;

  // constructor
  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }

  // destructor
  ~Node() {
    int value = this -> data;
    // memory free
    if(this -> next != NULL){
      delete next;
      this -> next = NULL;
    }
    cout << "Memory is freed for the node with data" << value << endl;
  }
};

void insertAtHead(Node* &head, int d){
// new node create
Node* temp = new Node(d);
temp -> next = head;
head = temp;

}

void insertAtTail(Node* &tail, int d){
// new node create
Node* temp = new Node(d);
tail -> next = temp;
tail = temp;

}


// traverse linked list
void print(Node* &head){
  Node* temp = head;
  while (temp != NULL) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
cout << endl;
}


// function to add data in different position(tail, head, any random)

void insertAtPosition(Node* &tail,Node* &head,int position , int d){ // d = data
  //insert at start
  if(position == 1){
    insertAtHead(head,d);
    return;
  }

  Node* temp = head;
  int cnt = 1;
  //insert at mid
  while(cnt < position-1){
    temp  = temp -> next;
    cnt++;
  }
  //inserting at last position
  if(temp -> next == NULL){
    insertAtTail(tail, d);
    return ;
  }

  // creating a node for d
  Node* nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
}

// deletion of data in linked list
void deleteNode(int position, Node* &head){

  //deleting start or first node
  if(position == 1){
    Node* temp = head;
    head = head -> next; // move head to next node
    // memory free start node
    temp -> next = NULL;
    delete temp;
  }
  else{
    //deleting any mid or last node
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < position){
      prev = curr;
      curr = curr -> next;
      cnt++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
  }

}

// check circular linked list
bool isCircular(Node* head){
    // empty list
    if(head == NULL){
      return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
      temp = temp -> next;
    }

    if(temp == head){
      return true;
    }
    return false;
}

// floyd- cycle finding algorithm

Node* floydDetectLoop(Node* head){

  if(head == NULL)
    return NULL;

  Node* slow = head;
  Node* fast = head;

  while(slow != NULL && fast != NULL){
    fast = fast -> next;
    if(fast!= NULL){
      fast = fast -> next;
    }
    slow = slow -> next;
    if(slow == fast){
      cout <<" Present at "<< slow -> data << endl;
      // cout <<" Present at "<< fast -> data << endl;
      return slow;
    }
  }
  return NULL;

}

// return starting node
Node* getStartingNode(Node* head){

  if(head == NULL)
    return NULL;

  Node* intersection = floydDetectLoop(head);
  Node* slow = head;

  while(slow != intersection) {
    slow = slow -> next;
    intersection = intersection -> next;
  }
  return slow;

}

// remove node
void removeLoop(Node* head){

  if(head == NULL)
  return;

  Node* startOfLoop = getStartingNode(head);
  Node* temp = startOfLoop;

  while(temp -> next != startOfLoop){
    temp = temp -> next;
  }
  temp -> next = NULL;

}

int main(){
  /*
  Node* node1 = new Node(10);
  // cout << node1 -> data << endl;
  // cout << node1 -> next << endl;

  // head pointed to node1
  Node* head = node1;
  Node* tail = node1;
  print(head);
  // insertAtHead(head, 12);
  insertAtTail(tail, 12);
  print(head);
  insertAtTail(tail, 15);
  print(head);
  // insertAtPosition(head,1,22);
  insertAtPosition(tail,head,4,22);
  print(head);

  cout << "head" << head -> data << endl;
  cout << "tail" << tail -> data << endl;
  deleteNode(4, head);
  print(head);

  //  H.W -> how to handle tail on deletion of last node ??
  cout << "head" << head -> data << endl;
  cout << "tail" << tail -> data << endl;
  */
  Node* node1 = new Node(10);

  Node* head = node1;
  Node* tail = node1;

  insertAtTail(tail, 45);
  insertAtTail(tail, 22);
  insertAtTail(tail, 34);
  insertAtHead(head, 01);
  insertAtPosition(tail,head,4,28);
  // print(head);

  tail -> next = head -> next;

  cout << "head" << head -> data << endl;
  cout << "tail" << tail -> data << endl;

  // detect loop
  if(floydDetectLoop(head) != NULL){
    cout << "Cycle is Present" << endl;
  }
  else{
    cout << "No cycle" << endl;
  }
    // get loop
  Node* loop = getStartingNode(head);
  cout << "loop starting at" << loop->data << endl;

    // get loop
    removeLoop(head);
    print(head);

  return 0;
}
