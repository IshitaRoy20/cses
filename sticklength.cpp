#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll c=0;
    ll mid=arr[n/2];
    for(ll i=0;i<n;i++)
    {
        c+=abs(arr[i]-mid);
    }
    cout<<c;
}
    