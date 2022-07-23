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
    int ans =0;
    pair<int,int>solve(TreeNode* root)
    {
        if(root==NULL)
            return {0,0};
        auto left=solve(root->left);
        int lsum=left.first;
        int lcount=left.second;
        auto right = solve(root->right);
        int rsum=right.first;
        int rcount=right.second;
        int sum=root->val+lsum+rsum;
        int cnt = lcount+rcount+1;
        if(sum/cnt==root->val) ans++;
        return {sum,cnt};
        
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};