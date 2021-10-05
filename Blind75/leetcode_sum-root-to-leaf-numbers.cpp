/**
 * Problem : https://leetcode.com/problems/sum-root-to-leaf-numbers
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
    void f(TreeNode* root, int x, int& ans){
    if(root->left==NULL and root->right ==NULL){
        ans += (x*10+root->val);
    }
    if(root->left!=NULL){
        f(root->left,x*10+root->val,ans);
    }
    if(root->right!=NULL){
        f(root->right,x*10+root->val,ans);
    }

}

    int sumNumbers(TreeNode* root) {
        int ans=0;
        if(root!=NULL){
            f(root,0, ans);
        }
        return ans;
    }
};