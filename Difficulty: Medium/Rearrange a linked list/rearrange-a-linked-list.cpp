/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // code here
        if(head==nullptr ||head->next==nullptr){
            return;
        }
        Node* odd=head;
        Node* even=head->next;
        Node* temp=even;
        
        while(even!=nullptr && even->next!=nullptr){
          odd->next=even->next;
          odd=odd->next;
          even->next=odd->next;
          even=even->next;
        }
        odd->next=temp;
    }
};