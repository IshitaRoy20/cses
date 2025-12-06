#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> dp(k + 1, 1e9);
    dp[0] = 0;
    for (ll i = 1; i <= k; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] <= i)
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
        }
    }
    cout << (dp[k] == 1e9 ? -1 : dp[k]);
}
