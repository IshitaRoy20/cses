#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i][0];
        cin >> vec[i][1];
        vec[i][2] = i;
    }
    sort(vec.begin(), vec.end());
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    vector<int> ans(n);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int x = vec[i][0];
        int y = vec[i][1];
        int idx = vec[i][2];

        if (pq.empty() || pq.top().first >= x)
        {
            ct += 1;
            pq.push({y, ct});
            ans[idx] = ct;
        }
        else
        {
            int left = pq.top().second;
            pq.pop();
            pq.push(
                {y, left});
            ans[idx] = left;
        }
    }
    cout << ct << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}
