/* The structure of linked list Node
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = nullptr;
  }
};
*/

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        if (head == nullptr)
            return {nullptr, nullptr};
        if (head->next == head)
            return {head, nullptr};
        Node* slow=head;
        Node* fast=head;
        while(fast->next!=head && fast->next->next!=head){
            slow=slow->next;
            fast=fast->next->next;
        } 
        if (fast->next->next == head)
              fast = fast->next;
        
        Node* head1 = head;
        Node* head2 = slow->next;
        slow->next = head1;
        fast->next = head2;

        return {head1, head2};
    }
};