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
   
 
     int maxPathAndGlobalUpdate(TreeNode *root, int &global_max) {
        if (root == NULL) return 0;
        int l = max(0, maxPathAndGlobalUpdate(root->left, global_max));
        int r = max(0, maxPathAndGlobalUpdate(root->right, global_max));
        global_max = max(global_max, l + r + root->val);
        return root->val + max(l, r);
    }

    int maxPathSum(TreeNode* root) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
         int maxAns = INT_MIN;
        maxPathAndGlobalUpdate(root, maxAns);
         return maxAns;
        
    }
};