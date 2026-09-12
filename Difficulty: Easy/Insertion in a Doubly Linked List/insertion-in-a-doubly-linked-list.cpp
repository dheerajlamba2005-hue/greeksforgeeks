/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        // code here
        if(head==nullptr){
            return new Node(x);
        }
        Node *temp=head;
        while(p>0){
            temp=temp->next;
            p--;
        }
        Node* curr=new Node(x);
        Node* temp1=temp->next;
        curr->next=temp1;
        curr->prev=temp;
        temp->next=curr;
        
        if(temp1!=nullptr){
            temp1->prev=curr;
            
        }
        return head;
        
    }
};