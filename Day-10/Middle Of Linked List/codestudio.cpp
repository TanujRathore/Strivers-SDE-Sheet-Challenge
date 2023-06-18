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

Node *findMiddle(Node *head) {
    // Write your code here
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt+=1;
    }
    int mid=cnt/2;
    temp=head;
    //mid--;
    while(mid--){
        temp=temp->next;
    }
    //temp->next=NULL;
    return temp;
}

