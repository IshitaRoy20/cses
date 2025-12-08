#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0;
    map<ll, ll> ind;
    ll mx = 0;
    while (r < a.size())
    {
        l = max(ind[a[r]], l);
        mx = max(mx, r - l + 1);
        ind[a[r]] = r + 1;
        r++;
    }
    cout <<mx;
}