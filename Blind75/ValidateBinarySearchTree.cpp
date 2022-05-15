/**
 * https://leetcode.com/problems/validate-binary-search-tree
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
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
    
    bool validate(TreeNode* root, long long int mn, long long int mx) {
        if(root == NULL){ 
            return true;
        }
        if (root->val > mn && root -> val < mx) {
            return validate(root->left, mn, root->val) && validate(root->right, root->val, mx);
        } else {
            return false;
        }
    }
};
