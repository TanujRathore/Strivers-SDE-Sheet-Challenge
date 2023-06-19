#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head || head->next==NULL) return true;
        LinkedListNode<int>*slow=head;
        LinkedListNode<int>*fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        LinkedListNode<int>*prev=slow;
        slow=slow->next;
        prev->next=NULL;
        
        LinkedListNode<int>*temp=slow;
        while(slow!=NULL){
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        fast=head;
        
        while(prev!=NULL){
            if(fast->data!=prev->data) return false;
            
            fast=fast->next;
            prev=prev->next;
        }
        return true;
        

}