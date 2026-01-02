#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll power(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
ll inverse(ll x)
{
    return power(x, mod - 2);
}
ll c(ll n, ll r)
{
    ll ans = 1;
    r = min(n - r, r);
    for (int i = 0; i < r; i++)
    {
        ans = (ans * 1LL * (n - i)) % mod;
        ans = (ans * 1LL * inverse(i + 1)) % mod;
    }
    return ans;
}
int main()
{
    ll n, m;
    cin >> n >> m;
    cout << c(n + m - 1, m);
}
