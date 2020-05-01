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
    bool isValidHelper(TreeNode* root,vector<int>& arr, int index, int n){
        if(root == NULL) return false;
        if((root->left == NULL) && (index < n) &&
           (root->right == NULL) && (root->val == arr[index]) && (index == n-1))
            return true;
    return ((index< n) && 
            (root -> val == arr[index]) && 
            (isValidHelper(root->left,arr,index+1,n)) || (isValidHelper(root->right,arr,index+1,n)));
        
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int n = arr.size();
        return isValidHelper(root,arr,0,n);
        
    }
};
