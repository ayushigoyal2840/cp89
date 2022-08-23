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
    ListNode* temp;
    bool ischeck(ListNode* p)
    {
        if(p==NULL) return true;
       bool ans = ischeck(p->next) and (p->val == temp->val);
           temp=temp->next;
        return ans;
                
        
        
    }
    bool isPalindrome(ListNode* head) {
        temp=head;
        return ischeck(head);
    }
};