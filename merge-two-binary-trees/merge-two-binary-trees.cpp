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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 and !t2) return NULL ;
        int val1 = (t1) ? t1->val : 0 ;
        int val2 = (t2) ? t2->val : 0 ;
        
        TreeNode* ret = new TreeNode(val1+val2);
        ret->left = mergeTrees(t1 ?t1->left:NULL ,t2?t2->left:NULL);
        ret->right = mergeTrees(t1?t1->right:NULL ,t2?t2->right:NULL);
        
        return ret ;
    }
};