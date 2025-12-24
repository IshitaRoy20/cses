#include <bits/stdc++.h>
using namespace std;
#define sze 200001
int n, m, k, x;
vector<int> adj[sze];
vector<int> ans(sze, -1);
int bfs(int p)
{
    int top;
    queue<int> q;
    vector<int> d(n + 1, -1);

    d[p] = 0;
    ans[p] = max(ans[p], d[p]);
    q.push(p);

    while (!q.empty())
    {
        top = q.front();
        q.pop();

        for (int v : adj[top])
        {
            if (d[v] == -1)
            {
                q.push(v);
                d[v] = d[top] + 1;
                ans[v] = max(ans[v], d[v]);
            }
        }
    }
    return top;
}
int main()
{
    int u, v;
    if (!(cin >> n))
        return 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int end1 = bfs(1);
    int end2 = bfs(end1);
    bfs(end2);
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}