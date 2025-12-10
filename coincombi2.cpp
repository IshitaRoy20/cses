#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
     vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    vector<ll> dp(k + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j <=k; j++) {
            
            dp[j] = (dp[j] + dp[j - arr[i]]) % mod;
        }
    }
    cout<<dp[k];
}