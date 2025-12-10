#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> dp(n + 1, 1e9);
    dp[0] = 0;

    for (ll i = 1; i <= n; i++) {
        ll t = i;
        while (t) {
            ll d = t % 10;
            dp[i] = min(dp[i], 1 + dp[i - d]);
            t /= 10;
        }
    }
    cout<<dp[n];
}
