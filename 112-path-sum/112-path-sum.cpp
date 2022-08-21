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
    
    bool hasPathSum(TreeNode* root, int target) {
        if(!root) return false;
     stack<pair<TreeNode*,int>>stk;
        stk.push({root,target});
        
        while(!stk.empty())
        {
            auto [node,sum]=stk.top();
            stk.pop();
            sum-=node->val;
            if(sum==0 and (!node->left and !node->right))
                return  true;
            if(node->left) stk.push({node->left,sum});
            if(node->right) stk.push({node->right,sum});
        }
        return false;
        
    }
};