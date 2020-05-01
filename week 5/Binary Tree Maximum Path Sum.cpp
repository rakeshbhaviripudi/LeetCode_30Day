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

//left sum + root sum.
// left+ right
// right + root 

class Solution {
public:
    int global_sum = INT_MIN;
    int maxpathSumHelper(TreeNode* root){
        if(!root) return 0;
        int left_sum =  maxpathSumHelper(root->left);
        int right_sum = maxpathSumHelper(root-> right);
        int local_sum = max(root->val, max(root->val +left_sum, root->val + right_sum));
        global_sum = max(global_sum, max(local_sum, root->val+left_sum+right_sum));
        
        return local_sum;
    }
    int maxPathSum(TreeNode* root) {
        maxpathSumHelper(root);
        return global_sum;
    }
};
