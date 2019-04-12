#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void topologicalSort(ll v, vector<ll> adj[], vector<bool> &visited,
                     stack<ll> &st) {
  visited[v] = true;
  for (ll j = 0; j < adj[v].size(); j++) {
    if (!visited[adj[v][j]])
      topologicalSort(adj[v][j], adj, visited, st);
  }
  st.push(v);
}

int main() {
  ll n, m;
  cin >> n >> m;
  ll x, y;
  vector<ll> adj[n];
  for (ll i = 0; i < m; i++) {
    cin >> x >> y;
    adj[x].push_back(y);
  }
  vector<bool> visited(n, false);
  stack<ll> st;
  for (ll i = 0; i < n; i++) {
    if (!visited[i])
      topologicalSort(i, adj, visited, st);
  }
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}
