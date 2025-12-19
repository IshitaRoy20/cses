#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;

    vector<ll> x(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        pre[i + 1] = pre[i] + x[i];
    }
    multiset<ll> ms;
    ll ans = LLONG_MIN;
    for (int r = 0; r < n; r++)
    {
        if (r - a + 1 >= 0)
            ms.insert(pre[r - a + 1]);

        if (r - b >= 0)
            ms.erase(ms.find(pre[r - b]));

        if (!ms.empty())
            ans = max(ans, pre[r + 1] - *ms.begin());
    }
    cout << ans;
    return 0;
}