#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum=0,mx=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
        mx=max(mx,arr[i]);
       
    }
        if(mx>(sum-mx))
        cout<<(2*mx);
        else
        cout<<sum;
}