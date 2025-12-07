#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];
    for (ll i = 0; i < m; i++) 
    cin >> b[i];
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
            }
        }
    }
    cout << dp[n][m] <<endl;

    vector<int> ans;
    ll i = n; 
    ll j = m;

    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            ans.push_back(a[i - 1]);
            i--;
            j--;
        }
        else {
            if (dp[i - 1][j] >= dp[i][j - 1]) i--;
            else j--;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int x : ans) 
    cout << x << " ";
}
