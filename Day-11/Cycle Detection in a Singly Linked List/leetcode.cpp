/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || head->next==NULL) return false;
        ListNode*temp=head;
        ListNode*search=head;
        while(temp && search){
            temp=temp->next;
            if(search->next!=NULL) search=search->next->next;
            else return false;
            
            if(temp==search) return true;
        }
        return false;
        
    }
};