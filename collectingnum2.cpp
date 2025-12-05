#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    vector<ll> pos(n + 1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
        pos[x] = i;
    }
    ll c=1;
    for (ll i = 1; i < n; i++)
        {
            if (pos[i + 1] < pos[i])
                c++;
        }
     set<pair<ll, ll> >swaps;
     ll a,b;
        for(ll i=0;i<k;i++)
        {
            cin>>a>>b;
            a=a-1;
            b=b-1;
            if(arr[a]+1<=n)
            swaps.insert({arr[a],arr[a]+1});
             if(arr[a]-1>=1)
            swaps.insert({arr[a]-1,arr[a]});
            if(arr[b]+1<=n)
            swaps.insert({arr[b],arr[b]+1});
             if(arr[b]-1>=1)
            swaps.insert({arr[b]-1,arr[b]});

            for(auto x:swaps)
            {
                if(pos[x.first]>pos[x.second])
                c--;
            }
            swap(arr[a],arr[b]);
            pos[arr[a]]=a;
            pos[arr[b]]=b;
            for(auto x:swaps)
            {
                if(pos[x.first]>pos[x.second])
                c++;
            }
            cout<<c<<endl;
            swaps.clear();
        }
    return 0;
}