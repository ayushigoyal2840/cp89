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
        int c=0;
        ListNode* temp=head;
        while(temp) {
            temp=temp->next;
            c++;
            
        }
        if(c==1 and n==1) return NULL;
        if(c==n)
        {
            head=head->next;
            return head;
        }
        int k=c-n-1;
        int i=0;
        cout<<"k="<<k;
        ListNode* ttt=head;
        ListNode* prev=head;
        while(i!=k)
        {
            prev=ttt;
            ttt=ttt->next;
            i++;
        }
        // cout<<"ttt->data"<<ttt->next->next->val;
        // if(ttt->next->next!=NULL)
        ttt->next=ttt->next->next;
        return head;
        
    }
};