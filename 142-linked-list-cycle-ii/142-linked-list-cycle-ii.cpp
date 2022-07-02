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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow and fast and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                
                if(slow==head)
                {
                    while(fast->next!=slow)
                    {
                        fast=fast->next;
                    }
                    return fast->next;
                }
                else 
                {
                    slow=head;
                    while(slow->next!=fast->next)
                    {
                        slow=slow->next;
                        fast=fast->next;
                    }
                    return fast->next;
                }
            }
        }
        return NULL;
    }
};