#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<vector<char>> grid(1000, vector<char>(1000));
vector<vector<char>> step(1000, vector<char>(1000));
bool vis[1000][1000];
stack<char> ans;
ll n, m;
bool valid(ll x, ll y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !vis[x][y]);
}
void backtrack(ll x, ll y)
{
    if (step[x][y] == 'X')
        return;

    char ch = step[x][y];
    ans.push(ch);

    if (ch == 'U')
        backtrack(x + 1, y);
    else if (ch == 'D')
        backtrack(x - 1, y);
    else if (ch == 'L')
        backtrack(x, y + 1);
    else if (ch == 'R')
        backtrack(x, y - 1);
}
bool bfs(ll x, ll y)
{
    bool flag = false;
    step[x][y] = 'X';
    queue<pair<ll, ll>> q;
    q.push({x, y});
    vis[x][y] = true;
    while (!q.empty())
    {
        pair<ll, ll> el = q.front();
        x = el.first;
        y = el.second;
        q.pop();
        if (grid[x][y] == 'B')
        {
            flag = true;
            break;
        }
        vis[x][y] = true;
        if (valid(x - 1, y))
        {
            q.push({x - 1, y});
            step[x - 1][y] = 'U';
            vis[x - 1][y] = true;
        }
        if (valid(x + 1, y))
        {
            q.push({x + 1, y});
            step[x + 1][y] = 'D';
            vis[x + 1][y] = true;
        }
        if (valid(x, y + 1))
        {
            q.push({x, y + 1});
            step[x][y + 1] = 'R';
            vis[x][y + 1] = true;
        }
        if (valid(x, y - 1))
        {
            q.push({x, y - 1});
            step[x][y - 1] = 'L';
            vis[x][y - 1] = true;
        }
    }
    if (flag == true)
    {
        backtrack(x, y);
        return true;
    }
    else
        return false;
}
int main()
{
    cin >> n >> m;
    pair<ll, ll> start, dest;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                start = {i, j};
            else if (grid[i][j] == 'B')
                dest = {i, j};
        }
    }
    if (bfs(start.first, start.second))
    {
        cout << "YES" << endl
             << ans.size() << endl;
        while (!ans.empty())
        {
            cout << ans.top();
            ans.pop();
        }
    }
    else
        cout << "NO" << endl;
}
