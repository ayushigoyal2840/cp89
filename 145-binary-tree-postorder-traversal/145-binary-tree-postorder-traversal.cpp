/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
       if(root==NULL) return {};
        vector<int>ans;
        stack<TreeNode*> sta;
        sta.push(root);
        while(!sta.empty())
        {
            TreeNode* curr= sta.top();
            if(curr->left)
            {
                sta.push(curr->left);
                curr->left = NULL;
            }
            else
            {
                if(curr->right)
                {
                    sta.push(curr->right);
                    curr->right=NULL;
                }
                else
                {
                    ans.push_back(curr->val);
                    sta.pop();
                }
            }
        }
        return ans;
    }
};