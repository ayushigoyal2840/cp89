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
#define ll long long
class Solution {
public:
    bool util(TreeNode* root, ll leftmin,ll rightmin)
    {
        if(!root) return true;
        if((ll)root->val<=leftmin or (ll)root->val>=rightmin)
            return false;
        return util(root->left,leftmin,root->val) and util(root->right,root->val,rightmin);
        
    }
    bool isValidBST(TreeNode* root) {
        if(!root->left and !root->right)return true;
        
        return util(root,LLONG_MIN,LLONG_MAX);
    }
};