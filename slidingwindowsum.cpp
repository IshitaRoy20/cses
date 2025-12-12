#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll x,a,b,c;
    cin>>x>>a>>b>>c;
    arr[0]=x;
    for (int i = 1; i <n; i++)
    {
        arr[i]=(arr[i-1]*a+b)%c;
    }
    ll s=0;
    for(int i=0;i<k;i++)
    s=s+arr[i];
    ll r=s;
    for(int i=k;i<n;i++)
    {
        s+=arr[i]-arr[i-k];
        r=r^s;
    }
    cout<<r;
}
