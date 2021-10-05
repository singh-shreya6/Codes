/**
Problem : https://leetcode.com/problems/container-with-most-water/
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
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        int ans =0;
        while(j>i){
            ans =  max(ans,abs(j-i)*min(height[i],height[j]));
            if(height[j] > height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};