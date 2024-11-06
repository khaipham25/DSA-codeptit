#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
vector<int> path;

void dfs(int u, int t, bool &ok) {
    visited[u] = true;
    path.push_back(u);
    if (u == t) {
        ok = true;
        for (int v : path)
            cout << v << " ";
        return;
    }
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, t, ok);
            if (ok)
                return;
        }
    }
    path.pop_back();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E, s, t;
        cin >> V >> E >> s >> t;
        for (int i = 1; i <= V; ++i) {
            adj[i].clear();
            visited[i] = false;
        }
        for (int i = 0; i < E; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool ok = false;
        path.clear();
        dfs(s, t, ok);
        if (!ok)
            cout << "-1";
        cout << endl;
    }
    return 0;
}
