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
    
    
    bool isPalindrome(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        while(first && first->next){
            second = second->next;
            first = first->next->next;
        }
        ListNode* prev=NULL;
        ListNode* next = NULL;
        ListNode* cur = head;
        while(cur!=second){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        if(first){
            second=second->next;
        }
        while(prev && second){
            if(prev->val!=second->val){
                return false;
            }
            prev=prev->next;
            second=second->next;
        }
        return true;
		
		
    }
};
    
    /*ListNode* getMid(ListNode* head)
    {
        ListNode* fast= head;
        ListNode* slow= head;
        
        if(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
                fast= fast->next;
        }
        slow= slow->next;
        
        return slow;
    }
    
    ListNode* getReverse(ListNode* head)
    {
        ListNode* curr= head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr= next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        
       if(head->next==NULL)
            return true;
        
        ListNode* mid= getMid(head);
        
        ListNode* temp= mid->next;
        mid->next= getReverse(temp);
        
        ListNode* head1= head;
        ListNode* head2= mid->next;
        
        while(head2 != NULL)
        {
            if(head1->val != head2->val)
                return false;
            
            head1= head1->next;
            head2= head2->next;
        }
            temp= mid->next;
            mid->next= getReverse(temp);
            
             return true;
        }
     
};


ListNode* first=head;
        ListNode* second=middle->next;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }*/