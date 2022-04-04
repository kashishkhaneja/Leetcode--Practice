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
    ListNode* swapNodes(ListNode* head, int k) {
        //Two pointer approach
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;
        
        int count = 1;      //size of linkedList
        while(curr != NULL)
        {
            if(count < k)
            {left = left -> next;}
            
            if(count > k)
            { right = right -> next; }
            
            curr = curr -> next;     //After curr, reached end of list, we swap
            count ++;
        }
        
        //swapping
        int temp = left -> val;
        left -> val = right -> val;
        right -> val = temp;
    
        return head;
    }
};