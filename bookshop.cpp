#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> p(n), pg(n);
    for (ll i = 0; i < n; i++)
     cin >> p[i];
    for (ll i = 0; i < n; i++)
     cin >> pg[i];
    vector<ll> dp(x + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll c = x; c >= p[i]; c--)
        {
            dp[c] = max(dp[c], pg[i] + dp[c - p[i]]);
        }
    }
    cout << dp[x];
}
