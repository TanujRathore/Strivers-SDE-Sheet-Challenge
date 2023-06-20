/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node*merge(Node*root1,Node*root2){
    
    if(!root1) return root2;
    if(!root2) return root1;
    
    Node* r3;
    
    if(root1->data<=root2->data){
        r3=root1;
        r3->child = merge(root1->child,root2);
    }
    else{
        r3=root2;
        r3->child = merge(root1,root2->child);
    }
    
    return r3;
    
    
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
   if(!head) return head;
   Node*r1=head;
   Node*r2=head->next;
   
   while(r2){
       r1=merge(r1,r2);
       r2=r2->next;
   }
   //return r1;
   Node*temp=r1;

   while(temp!=NULL){
       if(temp->next) temp->next=NULL;
       temp=temp->child;
   }
   return r1;
}
