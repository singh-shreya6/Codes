/*
https://leetcode.com/problems/number-of-islands/
*/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if(n == 0){
            return 0;
        }
        set<pair<int, int>> st;
        int c = 0;
        queue<pair<int, int>> q;
        int m = grid[0].size();
        for (int i = 0; i< n; i++) {
            for (int j = 0; j< m;j++){
                if(grid[i][j] == '1' && st.find(make_pair(i, j)) == st.end()){
                    q.push(make_pair(i, j));
                    st.insert(make_pair(i, j));
                    c++;
                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        if(x+1 < n && grid[x+1][y] == '1' && st.find(make_pair(x+1, y)) == st.end()) {
                            q.push(make_pair(x+1, y));
                            st.insert(make_pair(x+1 , y));
                        }
                        if(x-1 >= 0 && grid[x-1][y] == '1' && st.find(make_pair(x-1, y)) == st.end()) {
                            q.push(make_pair(x-1, y));
                            st.insert(make_pair(x-1 , y));
                        }
                          if(y-1 >= 0 && grid[x][y-1] == '1' && st.find(make_pair(x, y-1)) == st.end()) {
                            q.push(make_pair(x, y-1));
                            st.insert(make_pair(x , y-1));
                        }
                        if(y+1 < m && grid[x][y+1] == '1' && st.find(make_pair(x, y+1)) == st.end()) {
                            q.push(make_pair(x, y+1));
                            st.insert(make_pair(x , y+1));
                        }
                    }
                }
            }
        }
        return c;
        
    }
};
