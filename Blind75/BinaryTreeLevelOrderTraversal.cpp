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
 https://leetcode.com/problems/binary-tree-level-order-traversal/
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        if(root == NULL){
            return ans;
        }
        map<int, vector<int>> mp;
        q.push(make_pair(root, 0));
        mp[0].push_back(root->val);
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int l = q.front().second;
            q.pop();
            if(temp->left !=  NULL) {
                q.push(make_pair(temp->left, l+1));
                mp[l+1].push_back(temp->left->val);
            }
             if(temp->right !=  NULL) {
                q.push(make_pair(temp->right, l+1));
                mp[l+1].push_back(temp->right->val);
            }
        }
        
        auto it = mp.begin();
        while(it != mp.end()){
            ans.push_back(it->second);
            ++it;
        }
        return ans;
        
    }
};
