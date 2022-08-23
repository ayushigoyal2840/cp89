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
    int maxi=INT_MIN;
    int depth(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int leftsum = max(0,depth(root->left));
        int rightsum = max(0,depth(root->right));
        maxi=max(maxi,root->val+leftsum+rightsum);
        return root->val+max(leftsum,rightsum);
    }
    
    int maxPathSum(TreeNode* root) {
        depth(root);
        return maxi;
    }
};