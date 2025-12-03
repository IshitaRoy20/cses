#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a, b;
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr.push_back({a, 1});
        arr.push_back({b, -1});
    }
    ll c = 0;
    ll mx = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 2 * n; i++)
    {
        c += arr[i].second;
        mx = max(c, mx);
    }
    cout << mx;
}