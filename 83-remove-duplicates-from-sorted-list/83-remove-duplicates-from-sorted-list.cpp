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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        
        ListNode* temp= head;
        
        while(temp!=NULL)
        {
        if(temp->next!= NULL && temp->val==temp->next->val)
        {
            ListNode* next2 = temp->next->next;
            ListNode* deleteNode= temp->next;
            delete(deleteNode);
            temp->next= next2;
        }
        
        else{
            temp= temp->next;
        }
        }
        return head;
    }
        
};