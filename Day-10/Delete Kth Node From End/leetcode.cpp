/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1) return NULL;
        ListNode*temp=head; int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt+=1;
        }
        cout<<cnt<<" ";
        int k=cnt-n-1;
        temp=head;
        if(k<0){
            return head->next;
        }
        while(k-->0){
            temp=temp->next;
        }
        if(temp->next) temp->next=temp->next->next;
        return head;
        
    }
};