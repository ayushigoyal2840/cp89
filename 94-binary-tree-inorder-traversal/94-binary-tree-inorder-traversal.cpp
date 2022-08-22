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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        stack<TreeNode*> sta;
        TreeNode* node = root;
        while(true)
        {
            if(node!=NULL)
            {
                sta.push(node);
                node=node->left;
            }
            else
            {
                if(sta.size()==0) break;
                node = sta.top();
                sta.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
    }
};