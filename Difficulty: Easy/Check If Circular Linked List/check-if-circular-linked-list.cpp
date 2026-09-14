/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isCircular(Node *head) {
        // code here
        if(head==nullptr){
             return false;
        }
        Node* temp=head->next;
        while(temp!=nullptr && temp!=head){
            temp=temp->next;
        }
        if(temp==head){
            return true;
        }
 
        return false;
            
        
        
    }
};