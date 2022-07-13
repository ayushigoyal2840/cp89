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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        queue<pair<TreeNode*,int>> q;
        int count=0;
        int i=1;
        vector<int> ans;
         if(root!=NULL)
         {
            
             q.push({root,1});
              // i=q.front().second;
             TreeNode* var = q.front().first;
             ans.push_back(var->val);
             while(!q.empty())
             {
                 var=q.front().first;
                 if(count!=q.front().second)
                 {
                     v.push_back(ans);
                     ans.clear();
                     count=q.front().second;
                 }
                 if(var->left)
                 {
                     q.push({var->left,1+q.front().second});
                     ans.push_back(var->left->val);
                 }
                 if(var->right)
                 {
                     q.push({var->right,1+q.front().second});
                     ans.push_back(var->right->val);
                 }
                 
                 q.pop();
             }
         }
        return v;
    }
};