#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x;
    multiset<ll>s;
    for (int i = 0; i < n; i++)
    {
        cin >>x;
        auto it=s.upper_bound(x);
        if(it==s.end())
        s.insert(x);
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout<<s.size();
}