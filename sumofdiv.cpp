#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll mod2 = (mod + 1) / 2;

int main()
{
    ll n;
    cin >> n;

    ll sum = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        ll cnt = (n / i) - (i - 1);
        ll s1 = (i % mod) * (cnt % mod) % mod;
        ll temp = n / i;
        ll s2 = ((temp % mod * ((temp + 1) % mod) % mod * mod2 % mod) - (i % mod * ((i + 1) % mod) % mod * mod2 % mod) + mod) % mod;

        sum = (sum + s1 + s2) % mod;
    }

    cout << sum << endl;
}
