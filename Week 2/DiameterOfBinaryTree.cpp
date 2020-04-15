/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    
public:

    int ans =0;
    int max(int a, int b) 
    { 
        return a >= b ? a: b;
    }       
    
    int height(TreeNode* root){

        if(root == NULL) return 0;   
        
        int leftTreeHeight = height(root->left);
            
        int rightTreeHeight = height(root -> right);
        
        ans = max(ans, leftTreeHeight+ rightTreeHeight);
        
        return 1+ max(leftTreeHeight,rightTreeHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h = height(root);
        return ans;
    }
};


// auto speedup=[](){
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return nullptr;
// }();
