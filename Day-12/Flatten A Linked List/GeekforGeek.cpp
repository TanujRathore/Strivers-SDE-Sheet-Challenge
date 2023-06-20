
/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node*merge(Node*root1,Node*root2){
    
    if(!root1) return root2;
    if(!root2) return root1;
    
    Node* r3;
    
    if(root1->data<=root2->data){
        r3=root1;
        r3->bottom = merge(root1->bottom,root2);
    }
    else{
        r3=root2;
        r3->bottom = merge(root1,root2->bottom);
    }
    
    return r3;
    
    
}
Node *flatten(Node *root)
{
   // Your code here
   Node*r1=root;
   Node*r2=root->next;
   
   while(r2){
       r1=merge(r1,r2);
       r2=r2->next;
   }
   return r1;
   
}
