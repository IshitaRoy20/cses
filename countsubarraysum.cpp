#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;
    mp[0] = 1;

    ll ps = 0, ans = 0;
    for (ll x : a)
    {
        ps += x;
        ll need = ps - k;
        if (mp.find(need) != mp.end())
            ans += mp[need];
        mp[ps]++;
    }

    cout << ans;
}
