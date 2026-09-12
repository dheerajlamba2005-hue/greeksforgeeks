/* class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        // code here
        Node* head=new Node(0);
        Node* temp=head;
        int i=0;
        
        while(i<arr.size()){
            Node* temp1=new Node(arr[i]);
            
            temp1->prev=temp;
            temp->next=temp1;
            temp=temp->next;
            i++;
        }
        head=head->next;
        return head;
    }
};