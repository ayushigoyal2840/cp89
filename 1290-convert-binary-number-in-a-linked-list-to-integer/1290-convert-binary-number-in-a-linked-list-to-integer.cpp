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
    int getDecimalValue(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int aa=0;
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            aa+=ans[i]*pow(2,i);
        }
        return aa;
    }
};