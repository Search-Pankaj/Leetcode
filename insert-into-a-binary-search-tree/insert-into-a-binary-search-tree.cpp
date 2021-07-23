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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*head  = root ;
        if(root == nullptr  ){
            TreeNode* node = new TreeNode(val);
            
            return head = node ;
        }
       if(val < root->val and root->left == nullptr){
           TreeNode* node = new TreeNode(val);
           root->left = node ;
           return head;
       }
         if(val > root->val and root->right == nullptr){
           TreeNode* node = new TreeNode(val);
           root->right = node ;
             return head;
       }
       
     val< root->val ? insertIntoBST(root->left, val) : insertIntoBST(root->right,  val) ;
    return head ;
    }
};