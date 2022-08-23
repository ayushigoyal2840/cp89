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
    int findmax(TreeNode* root,int &d)
    {
        if(root==NULL) return 0;
        int lh = findmax(root->left,d);
        int rh = findmax(root->right,d);
        d=max(d,lh+rh);
        return max(lh,rh)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        findmax(root,d);
        return d;
    }
};