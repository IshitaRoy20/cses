#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin >> n>>k;
     vector<ll> arr(n);
     vector<ll> psum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i>=1)
        psum[i]=psum[i-1]+arr[i];
        else
        psum[i]=arr[i];
    }
    ll a,b;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        a=a-1;
        b=b-1;
        cout<<psum[b]-(a>0?psum[a-1]:0)<<endl;
    }

}
    