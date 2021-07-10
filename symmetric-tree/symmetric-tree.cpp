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
    
    bool helper(TreeNode* Leftnode ,TreeNode* Rightnode){
        if(Leftnode == NULL && Rightnode != NULL) return false;
        if(Leftnode != NULL && Rightnode == NULL) return false;
        if(Leftnode == NULL && Rightnode == NULL) return true;
        if(Leftnode->val != Rightnode->val) return false;
        
        return helper(Leftnode->left ,Rightnode->right) && helper(Leftnode->right ,Rightnode->left);  
    }
        
    bool isSymmetric(TreeNode* root) {
     if(root  == NULL) return true;
        return helper(root->left ,root->right);
    }
};