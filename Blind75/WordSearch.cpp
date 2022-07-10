/* https://leetcode.com/problems/word-search/ */

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int n, int m, int k, vector<vector<bool>>& vis) {
        if (i < 0 || j < 0 || i>=n || j >= m || board[i][j] != word[k] || vis[i][j]) {
            return false;
        }
        if (k == word.length() - 1) {
            return true;
        }
        vis[i][j] = true;
        bool ans = dfs(board, word, i, j+1, n, m, k+1, vis) ||
            dfs(board, word, i, j-1, n, m, k+1, vis) || 
            dfs(board, word, i-1, j, n, m, k+1, vis) || 
            dfs(board, word, i+1, j,n, m, k+1, vis);
        if (ans) {
            return true;
        }
        vis[i][j] = false;
        return ans; 
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int l = word.length();
        int k = 0;
        vector<vector<bool>> vis(n, vector<bool> (m, false));
        for(int i = 0; i< n;i++) {
            for(int j = 0; j< m; j++) {
                if (board[i][j] == word[k]) {
                    bool ans = dfs(board, word, i, j, n, m, k, vis);
                    if (ans) {
                        return true;
                    }
                    
                }
            }
        }
        return false; 
    }
};
