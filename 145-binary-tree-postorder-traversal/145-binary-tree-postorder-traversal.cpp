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
            vector<int> ans;

        if(!root) return ans;
        stack<TreeNode*> sta1,sta2;
        sta1.push(root);
        while(!sta1.empty())
        {
            root=sta1.top();
            sta1.pop();
            sta2.push(root);
            if(root->left) sta1.push(root->left);
                        if(root->right) sta1.push(root->right);

        }
        while(!sta2.empty())
        {
            ans.push_back(sta2.top()->val);
            sta2.pop();
        }
        return ans;
    }
};