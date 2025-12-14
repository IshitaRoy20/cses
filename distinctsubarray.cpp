#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0;
    ll c = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        mp[a[r]]++;
        while (mp[a[r]] > 1)
        {
            mp[a[l]]--;
            l++;
        }
        c += r - l + 1;
        r++;
    }
    cout << c;
}