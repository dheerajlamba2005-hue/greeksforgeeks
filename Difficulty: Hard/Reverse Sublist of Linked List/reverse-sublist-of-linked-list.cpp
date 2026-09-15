/* Structure of a Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        // code here
       

        if (head == nullptr || a == b)
            return head;

        Node* before = nullptr;
        Node* curr = head;

        
        for (int i = 1; i < a; i++) {
            before = curr;
            curr = curr->next;
            }
        Node* first = curr;

        Node* prev=nullptr;

        for (int i = a; i <= b; i++) {
            Node* next1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next1;
            }


        if (before != nullptr)
            before->next = prev;
        else
            head = prev;

        
        first->next = curr;

        return head;
            
        
    }
};