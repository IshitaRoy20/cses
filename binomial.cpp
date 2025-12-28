#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1000000007;
ll fact[1000001];
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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact[0] = 1;
    for (int i = 1; i < 1000001; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (b < 0 || b > a)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = ((fact[a] % mod * inverse(fact[b])) % mod) * inverse(fact[a - b]) % mod;
        cout << ans << endl;
    }
    return 0;
}
