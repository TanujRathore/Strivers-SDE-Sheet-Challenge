#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
     if(first==NULL) return second;
        if(second==NULL) return first;
        //ListNode*dumnode=new ListNode(0);
        //ListNode*temp=dumnode;
        Node<int>*dumnode=new Node<int>(0);
        Node<int>*temp=dumnode;
        while(first!=NULL && second!=NULL){
            if(first->data<=second->data){
                temp->next=first;
                first=first->next;
            }
            else{
                temp->next=second;
                second=second->next;
            }
            temp=temp->next;
        }
        temp->next=second==NULL ? first : second;
        return dumnode->next;
}