/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head->next==NULL && K==1) return NULL;
        Node*temp=head; int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt+=1;
        }
        //cout<<cnt<<" ";
        int d=cnt-K-1;
        temp=head;
        if(d<0){
            return head->next;
        }
        while(d-->0){
            temp=temp->next;
        }
        if(temp->next) temp->next=temp->next->next;
        return head;
}
