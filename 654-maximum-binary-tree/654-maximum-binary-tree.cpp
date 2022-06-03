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
    TreeNode* fun(vector<int>& nums, int l, int r)
    {
        if(l>r)
            return NULL;
        int maxi=-1;
        int ind=-1;
        for(int i=l;i<=r;i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                ind=i;
            }
        }
        TreeNode* root=new TreeNode(maxi);
        root->left=fun(nums,l,ind-1);
        root->right=fun(nums,ind+1,r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return fun(nums,0,nums.size()-1);
    }
};