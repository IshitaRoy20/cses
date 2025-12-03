#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum=0;
    cin >> n;
    ll mx=LLONG_MIN;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
    {
    cin>>arr[i];
    sum=max(sum+arr[i],arr[i]);
    mx=max(mx,sum);
    }
    cout<<mx;

}