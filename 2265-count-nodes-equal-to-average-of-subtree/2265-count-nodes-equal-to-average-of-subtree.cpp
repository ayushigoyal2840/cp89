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
    int c=0;
    vector<int>ans;
    int sum=0;
    void inorder(TreeNode* root)
    {
        if(root)
        {
            c++;
            inorder(root->left);
            sum+=root->val;
            inorder(root->right);
        }
    }
    int ff(TreeNode* root)
    {
        if(root)
            inorder(root);
        
        
        int get=sum/c;
        // cout<<sum<<endl;
        sum=0;
        c=0;
        return get;
    }
    int count=0;
    int averageOfSubtree(TreeNode* root) {
        if(root)
        {
            if(root->val == ff(root))
                count++;
            averageOfSubtree(root->left);
            averageOfSubtree(root->right);
        }
        return count;
    }
};