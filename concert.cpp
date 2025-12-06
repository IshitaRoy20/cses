#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> tick(n);
    vector<ll> pay(m);
    multiset<ll,greater<ll>>s;
    for (ll i = 0; i < n; i++)
    {
        cin>>tick[i];
        s.insert(tick[i]);
    }
    for (ll i = 0; i < m; i++)
    { cin>>pay[i];
        auto it=s.lower_bound(pay[i]);
        if(it==s.end())
        {
            cout<<-1<<endl;
        }
        else{
            ll t=*it;
            cout<<t<<endl;
            s.erase(it);
        }
    }
}
