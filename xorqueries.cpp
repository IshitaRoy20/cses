#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
  ll x;
    vector<ll> psum(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin >>x;
            psum[i] = psum[i - 1] ^ x;
    }
    ll a, b;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        cout << (psum[b]^psum[a-1])<< endl;
    }
}
