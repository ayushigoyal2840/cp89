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
    vector<int>v;
    TreeNode* increasingBST(TreeNode* root) {
        if(root!=NULL)
        {
            increasingBST(root->left);
            v.push_back(root->val);
            increasingBST(root->right);
        }
        TreeNode* ans = new TreeNode;
        
        TreeNode* temp=ans;
        for(int i=0;i<v.size();i++) {
            ans->val=v[i];
            ans->left=NULL;
            if(i<v.size()-1) {
                ans->right = new TreeNode;
                ans=ans->right;
            }
        }
        return temp;
    }
};