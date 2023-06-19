/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    Node*temp=head;
    Node*search=head;
    if(head->next){
        search=head->next->next;
    }

    while(temp && search){
        temp=temp->next;
        if(search->next!=NULL) search=search->next->next;
        else return false;
        
        if(temp==search){
            return true;
        }
    }
    return false;
}