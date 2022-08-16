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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       stack<TreeNode*> s;
        TreeNode* root=NULL;
      for(int i=0;i<nums.size();i++)
      {
          TreeNode* curr=new TreeNode(nums[i]);
          
                    while(!s.empty() and (s.top()->val < curr->val))
                  {
                     curr->left = s.top();
                      s.pop();
                  }
          
           if(!s.empty())
          {
              s.top()->right = curr;
          }
          else
          {
              root=curr;
          }
          s.push(curr);
              
        }
        return root;
    }
};