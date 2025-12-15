#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0;
    ll m = 0;
    ll c = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        if (mp[a[r]] == 0)
            m++;
        mp[a[r]]++;

        while (m >k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                m--;
            l++;
        }
        c += r - l + 1;
        r++;
    }

cout << c;
}