#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> dist(n + 1, INT_MAX), parent(n + 1);
    vector<vector<int>> adj(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int t : adj[x])
        {
            if (dist[t] == INT_MAX)
            {
                dist[t] = dist[x] + 1;
                parent[t] = x;
                q.push(t);
            }
        }
    }

    if (dist[n] == INT_MAX)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << dist[n] + 1 << "\n";

        vector<int> path;
        path.push_back(n);

        while (path.back() != 1)
        {
            path.push_back(parent[path.back()]);
        }

        reverse(path.begin(), path.end());

        for (int node : path)
        {
            cout << node << " ";
        }
    }

    return 0;
}
