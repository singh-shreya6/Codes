//https://leetcode.com/problems/course-schedule

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& a) {
        map<int, vector<int>> mp;
        vector<int> indegree(n, 0);
        queue<int> q;
        int c = 0;
        
        for(int i = 0;i < a.size(); i++){
            mp[a[i][1]].push_back(a[i][0]);
            indegree[a[i][0]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            c++;
            for(int i = 0; i < mp[v].size(); i++){
                indegree[mp[v][i]]--;
                if(indegree[mp[v][i]] == 0){
                    q.push(mp[v][i]);
                }
            }
            
        }
        if(c != n){
            return false;
        }
        return true;
    }
};
