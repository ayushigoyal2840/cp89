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
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> sta;
                vector<int>ans;
if(!root) return ans;
        sta.push(root);
        while(!sta.empty())
        {
            auto node = sta.top();
            sta.pop();
            ans.push_back(node->val);
            if(node->right)
                sta.push(node->right);
            if(node->left)
                sta.push(node->left);
        }
        return ans;
    }
};