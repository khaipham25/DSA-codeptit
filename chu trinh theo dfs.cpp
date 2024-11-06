#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll = long long;
vector<int> adj[1000005];
ll v, e;
bool visited[1000005];
int parent[1000005];

bool DFS(int u, int par) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            if (DFS(v, u))
                return true;
        } else if (v != par) {
            parent[v] = u;
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        for (int i = 1; i <= v; ++i) {
            adj[i].clear();
            visited[i] = false;
        }
        for (int i = 0; i < e; ++i) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for (int i = 1; i <= v; ++i)
            sort(adj[i].begin(), adj[i].end());

        bool found_cycle = false;
                if (DFS(1, 0)) {
                    found_cycle = true;
                    break;
                }
            

        if (!found_cycle)
            cout << "-1" << endl;
        else {
            vector<int> cycle;
            int cur = 1;
            while (parent[cur] != 0) {
                cycle.push_back(cur);
                if (parent[cur] == 1)
                    break;
                cur = parent[cur];
            }
            cycle.push_back(1); // Add the starting vertex to close the cycle
            reverse(cycle.begin(), cycle.end());
            for (int vertex : cycle)
                cout << vertex << " ";
            cout << endl;
        }
    }
    return 0;
}

