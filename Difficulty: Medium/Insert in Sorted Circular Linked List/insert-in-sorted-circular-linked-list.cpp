/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* temp = new Node(data);

        if (head == nullptr) {
            temp->next = temp;
            return temp;
        }
        if (data <= head->data) {
            Node* last = head;

            while (last->next != head)
                last = last->next;

            last->next = temp;
            temp->next = head;

            return temp;
        }

        Node* curr = head;

        while (curr->next != head &&
               curr->next->data < data) {
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;

        return head;
    }
  
};