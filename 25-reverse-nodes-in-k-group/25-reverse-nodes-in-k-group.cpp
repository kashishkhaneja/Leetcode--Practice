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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL && head -> next == NULL){
            return head;
        }
        
        
        ListNode * prev = NULL, *curr = head, *next = NULL;
        int count = 0;
        
        while(curr != NULL){
            count++;
            curr = curr -> next;
        }
        
        // to check: whether k nodes are present or not
        // if not then return
        if(count < k){
            return head;
        }
        
        count = 0;
        curr = head;
        
        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
        
        return prev;
    }
};