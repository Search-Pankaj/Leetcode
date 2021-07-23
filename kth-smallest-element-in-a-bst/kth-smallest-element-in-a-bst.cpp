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
    void helper(TreeNode* root, int &k,int &c){
        if(!root) return ;
        helper(root->left,k,c);
        k-- ;
        if(k==0){
            c= root->val;
            return ;
        } 
        helper(root->right,k,c);
    }
    int kthSmallest(TreeNode* root, int k) {
        int c ;
        helper(root,k,c);
        return c;
    }
};