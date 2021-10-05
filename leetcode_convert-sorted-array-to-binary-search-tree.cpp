/**
Problem statement : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode* f(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        
        int mid = (end+start)/2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->left = f(nums, start,mid-1);
        t->right = f(nums, mid+1, end);
        return t;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums, 0, nums.size()-1);
    }
};