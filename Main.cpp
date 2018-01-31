#include <iostream>

using namespace std;

//struct for node
struct Node {
  Node(int id);
  int ID;
  Node* next;
};

//this function will add a node with the number 100 before each node that has a '2' integer
Node* function_A(Node* head);
//this function will delete every node that has '2' as an integer
Node* function_D(Node* head);
//this function will print out everything
void print(Node* head);

//declaring the constructor for the struct
Node::Node(int id) {
  ID = id;
  next = NULL;
}

int main() {
  Node* node1 = new Node(1); //why are these node pointers
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  node1->next = node2;
  node2->next = node3;
  Node* head = NULL;
  head->next = node1;

  cout << "This is the current linked list: " << endl;
  print(head);
  cout << "There is a linked list with three nodes with integer values 1, 2, and 3 respectively.  The following function will add a node with the number 100 before each node that has a '2' integer" << endl;
  //  function_A(head);
  cout << "The following function will now delete every node that has '2' as an integer" << endl;
  // function_D(head);
  return 0;
}

void print(Node* head) {
  if (head == NULL) {
  }
  if (head->next != NULL) {
    cout << head->next << ", " << endl;
    print(head->next);
  }
}

Node* function_A(Node* head) {
head
  head->next
  if (head == NULL) || (head->next == NULL))
  if (head->next->ID == 2) {
    //add a node
    Node* a = new Node(100);
    a->next = head->next;
    head->next = a;
    head = head->next;
  }
  function_A(head->next);
  return head;
}

Node* function_D(Node* head) {
  if (head->next->ID == 2) {
    Node* todelete = head->next;
    head->next = head->next->next;
    delete todelete;
  }
  function_D(head->next);
  return head;
}
