/**
* https://leetcode.com/problems/maximum-depth-of-binary-tree
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
    int ans = 0;
    int maxDepth(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        depth(root, 1);    
        return ans;
    }
    
    void depth(TreeNode* root, int l) {
        if(root == NULL) {
            return;
        }
        if(root-> left == NULL && root ->right == NULL){
            ans = max(ans, l);
        }
        depth(root->left, l+1);
        depth(root->right, l+1);
    }
};
