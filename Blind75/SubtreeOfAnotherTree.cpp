/* https://leetcode.com/problems/subtree-of-another-tree/ */

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(root == NULL && subRoot == NULL){
          return false;
      }
      if(root == NULL || subRoot == NULL){
          return false;
      }
      if(root->val == subRoot->val){
          bool l = isSameTree(root->left, subRoot->left);
          bool r = isSameTree(root->right, subRoot->right);
          if(l & r){
              return true;
          } else {
              return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
          }
      }
      return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    
    bool isSameTree(TreeNode* t1, TreeNode* t2){
        if (t1 == NULL && t2 == NULL){
            return true;
        }
        if (t1 == NULL || t2 == NULL){
            return false;
        }
        return t1->val == t2-> val  && isSameTree(t1->left, t2->left) &&
            isSameTree(t1->right, t2->right);
        
    }
};