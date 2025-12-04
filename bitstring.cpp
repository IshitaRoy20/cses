#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a, ll b, ll c=(pow(10,9)+7)) {
    ll ans = 1;
    for(ll i = 1; i <= b; i++)
     {
        ans = (ans * a) % c;
    }

    return ans;
}
int main()
{
     long long n;
     cin>>n;
     cout<<power(2,n);
}