#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n), dp(k + 1, 0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    dp[0] = 1;
    ll mod = pow(10, 9) + 7;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] <= i)
            {
                dp[i] = (dp[i] + dp[i - arr[j]]) % mod;
            }
        }
    }
    cout << dp[k] << endl;
}