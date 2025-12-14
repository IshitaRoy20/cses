#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll,ll>mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans=1;
    for(int i=0;i<n;i++)
    {
        ans=(ans%mod*(mp[i]+1)%mod)%mod;
    }
    ans=(ans-1+mod)%mod;
    cout<<ans;
}