#include <bits/stdc++.h>
using namespace std;

const int sze = 200001;
int n, m, x;
vector<int> adj[sze];
int s[sze];
void dfs(int u, int parent)
{
    s[u] = 1;
    for (int v : adj[u])
    {
        if (v != parent)
        {
            dfs(v, u);
            s[u] += s[v];
        }
    }
}
int main()
{
    int n, x;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << s[i] - 1 << " ";
    }
}