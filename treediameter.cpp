#include <bits/stdc++.h>
using namespace std;
#define sze 200001
int n, x, y;
vector<int> adj[sze];
pair<int, int> bfs(int p)
{
    queue<pair<int, int>> q;
    vector<bool> vis(sze, false);
    pair<int, int> last;
    q.push({p, 0});
    vis[p] = true;
    while (!q.empty())
    {
        last = q.front();
        q.pop();
        for (int v : adj[last.first])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push({v, last.second + 1});
            }
        }
    }
    return last;
}
int main()
{
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    pair<int, int> end1 = bfs(1);
    pair<int, int> end2 = bfs(end1.first);

    cout << end2.second << endl;

    return 0;
}
