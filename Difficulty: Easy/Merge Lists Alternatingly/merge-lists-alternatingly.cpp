/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    vector<Node *> mergeList(Node *head1, Node *head2) {
        // code Here
      
              Node* p1 = head1;
              Node* p2 = head2;

              while (p1 != nullptr && p2 != nullptr){
                  Node* next1 = p1->next;
                  Node* next2 = p2->next;
                  p1->next = p2;
                  p2->next = next1;
                  p1 = next1;
                  p2 = next2;
              }

              vector<Node*> mergeList;

              mergeList.push_back(head1);
              mergeList.push_back(p2);

              return mergeList;
          }
      };
