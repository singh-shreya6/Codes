/*
https://leetcode.com/problems/pacific-atlantic-water-flow
*/
class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& heights, int i, int j, int n, int m, int cur, vector<vector<int>>& a) {
        if (i<0 || j<0 || i>=n || j>=m || a[i][j] == 1) {
            return;
        }
        
        if (heights[i][j] < cur){
             return;
        }
        
        a[i][j] = 1;
         
        dfs(heights, i-1, j, n, m, heights[i][j], a); 
        dfs(heights, i, j-1, n, m, heights[i][j], a);
        dfs(heights, i+1, j, n, m, heights[i][j], a);
        dfs(heights, i, j+1, n, m, heights[i][j], a);
    }
    
     void dfs2(vector<vector<int>>& heights, int i, int j, int n, int m, int cur,
              vector<vector<int>>& p) {
        if (i < 0 || j < 0 || i >= n || j >= m || p[i][j] == 1)  {
            return ;
        }
        if (heights[i][j] < cur){
             return;
         }
         p[i][j] = 1;
         dfs2(heights, i-1, j, n, m, heights[i][j], p);
         dfs2(heights, i, j-1, n, m, heights[i][j], p);
         dfs2(heights, i+1, j, n, m, heights[i][j], p);
         dfs2(heights, i, j+1, n, m, heights[i][j], p);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        if (n == 0) {
            return ans;
        }
        int m = heights[0].size();
        vector<vector<int>> p(n, vector<int> (m, 0));
        vector<vector<int>> a(n, vector<int> (m, 0));
        
        for(int i = 0; i < n; i++) {
            dfs2(heights, i, 0, n, m, -1,  p);
            dfs(heights, i, m-1, n, m, -1, a);
        }
        
        for(int j = 0; j < m; j++) {
            dfs2(heights, 0, j, n, m, -1, p);
            dfs(heights, n-1, j, n, m, -1, a);
        }
        
        
        for(int i = 0; i< n; i++) {
             for(int j = 0; j < m; j++) {
                 if (p[i][j] == 1 && a[i][j] == 1){
                     vector<int> v;
                     v.push_back(i);
                     v.push_back(j);
                     ans.push_back(v);
                 }
                                
             }
        } 
       
        return ans;
    }
};
