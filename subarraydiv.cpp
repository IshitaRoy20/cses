#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<ll, ll> mp;
    mp[0] = 1;

    ll ps = 0, ans = 0;
    for (ll x : a)
    {
        ps = ((ps+x)%n+n)%n;
       if(ps==0)
       ans+=1;
    
       ans+=mp[ps];
       mp[ps]+=1;
    }

    cout << ans;
}
