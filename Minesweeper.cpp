/* https://leetcode.com/problems/minesweeper */
#define mkp make_pair
class Solution {
public:
    bool isSafe(int x, int y, int n, int m) {
        return x >= 0 && y >= 0 && x < n && y < m;
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int n = board.size();
        if (n == 0) {
            return board;
        }
        int m = board[0].size();
        queue<pair<int, int>> q;
        if (board[click[0]][click[1]] == 'M') {
            board[click[0]][click[1]] = 'X';
            return board;
            
        }
        if (board[click[0]][click[1]] == 'E'){
            q.push(mkp(click[0], click[1]));
        } 
        map<pair<int, int>, int> mp;
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        mp[{click[0], click[1]}] = 1;
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int c = 0;
            for(int i = 0; i < 8; i++){
                int u = x+dx[i];
                int v = y+dy[i];
                if (isSafe(u, v, n, m) && mp.find(mkp(u, v)) == mp.end() &&  board[u][v] == 'M') {
                    c++;
                }
            }
            if (c > 0) {
                 if(isSafe(x, y, n, m))
                    board[x][y] =  c + '0';
            } else {
               
                for(int i = 0; i < 8; i++){
                    int u = x+dx[i];
                    int v = y+dy[i];
                    if(isSafe(x, y, n, m) && mp.find(mkp(u, v)) == mp.end() ) { 
                        board[x][y] = 'B';
                        q.push(mkp(u, v));
                        mp[{u, v}] = 1;
                    }
                }
            }   
        }
        return board;   
    }
};
