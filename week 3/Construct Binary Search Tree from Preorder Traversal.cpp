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
    // TreeNode* bstHelper(vector<int>& preorder, int bound){
    //     int i =0;
    //     if(i== preorder.size() || preorder[i] > bound) return NULL;
    //     TreeNode* root = new TreeNode(preorder[i++]);
    //     root->left =  bstHelper(preorder, root-> val);
    //     root->right = bstHelper(preorder, bound);
    //     return root;
    // }
    // TreeNode* bstFromPreorder(vector<int>& preorder) {  
    //     return bstHelper(preorder,INT_MAX);
    // }
    int i =0;
    TreeNode* bstFromPreorder(vector<int>& preorder, int bound=INT_MAX) {  
        if(i== preorder.size() || preorder[i] > bound) return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left =  bstFromPreorder(preorder, root-> val);
        root->right = bstFromPreorder(preorder, bound);
        return root;
    }
};
