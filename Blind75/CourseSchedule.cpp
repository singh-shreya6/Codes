/* https://leetcode.com/problems/course-schedule/ */

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prereq) {
        map<int, vector<int>> mp;
        vector<int> indeg(n, 0);
        for(int i  = 0; i < prereq.size(); i++){
            mp[prereq[i][1]].push_back(prereq[i][0]);
            indeg[prereq[i][0]]++;
        }
        int c = 0;
        queue<int> q;
        for(int i = 0; i < n ;i ++){
            if(indeg[i] == 0) {
                q.push(i);
            }
        }
        while(!q.empty()){
            int t = q.front();
            c++;
            q.pop();
            for(int i = 0; i< mp[t].size(); i++){
                indeg[mp[t][i]]--;
                if (indeg[mp[t][i]] == 0) {
                   q.push(mp[t][i]); 
                }
            }
        }
        return c == n;
        
    }
