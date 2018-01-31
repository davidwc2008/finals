#include <iostream>

using namespace std;

//struct for nodes
struct Node {
  Node(int id);
  int ID;
  Node* next;
};

//this function will add a node with the number 100 before each node that has a '2' integer
void function_A(Node* &head, Node* curr);
//this function will delete every node that has '2' as an integer
void function_D(Node* curr);
//this function will print out everything
void print(Node* head);

//declaring the constructor for the struct
Node::Node(int id) {
  ID = id;
  next = NULL;
}

int main() {

  Node* head = NULL;
  Node* node1 = new Node(1); //why are these node pointers, creating on the heap
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  //head->next = node1;
  node1->next = node2;
  node2->next = node3;
  //node3->next = NULL;

  cout << "This is the current linked list: " << endl;
  print(node1);
  cout << "There is a linked list with three nodes with integer values 1, 2, and 3 respectively.  The following function will add a node with the number 100 before each node that has a '2' integer" << endl;
  function_A(head, node1);
  cout << "The following function will now delete every node that has '2' as an integer" << endl;
  function_D(node1);
  
  return 0;
}

void print(Node* head) {
  if (head != NULL) {
    cout << head->ID << ", " << endl;
    print(head->next);
  }
}

//by iteration (with while loop)
//need to consider special case of the head
void function_A(Node* curr) {
  while(curr != NULL) {
    if (curr->ID == 2) {
      Node* a = new Node(100);
      a->next = curr->next;
      curr->next = a;
    }
    if (curr->ID != 2) {
    curr = curr->next;
    } else if (curr->ID == 2) {
      curr = curr->next->next->next;
    }
  }
}

//by recursion
void function_D(Node* curr) {
  if (curr->next->ID == 2) {
    Node* todelete = curr;
    

  if ((head == NULL) || (head->next == NULL)) {
  } else if (head->next->ID == 2) {
    Node* todelete = head->next;
    head->next = head->next->next;
    delete todelete;
  }
  function_D(head->next);
  return head;
}
