/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* makeUnion(Node* head1, Node* head2) {
       unordered_set<int> seen;

               Node* head = nullptr;
               Node* tail = nullptr;

               // First list
               for (Node* temp = head1; temp != nullptr; temp = temp->next) {

                   if (seen.find(temp->data) == seen.end()) {

                       seen.insert(temp->data);

                       Node* newNode = new Node(temp->data);

                       if (head == nullptr) {
                           head = tail = newNode;
                       }
                       else {
                           tail->next = newNode;
                           tail = newNode;
                       }
                   }
               }

               // Second list
               for (Node* temp = head2; temp != nullptr; temp = temp->next) {

                   if (seen.find(temp->data) == seen.end()) {

                       seen.insert(temp->data);

                       Node* newNode = new Node(temp->data);

                       if (head == nullptr) {
                           head = tail = newNode;
                       }
                       else {
                           tail->next = newNode;
                           tail = newNode;
                       }
                   }
               }

               return head;  
    }
};