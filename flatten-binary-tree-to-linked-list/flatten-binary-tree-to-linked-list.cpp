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
    void flatten(TreeNode* root) {
        if (!root) return;

        TreeNode* node = root;
        while (node) {

            // Attatches the right sub-tree to the rightmost leaf of the left sub-tree:
            if (node->left) {

                TreeNode *rightMost = node->left;
                while (rightMost->right) {

                    rightMost = rightMost->right;
                }
                rightMost->right = node->right;

                // Makes the left sub-tree to the right sub-tree:
                node->right = node->left;
                node->left = NULL;
            }

            // Flatten the rest of the tree:
            node = node->right;
        }     
    }
    
};