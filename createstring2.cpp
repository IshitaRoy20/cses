#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
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
    string s;
    cin >> s;
    map<char, int> mp;
    fact[0] = 1;
    for (int i = 1; i < 1000001; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    ll n = s.length();
    ll deno = 1;
    for (auto &it : mp)
    {
        deno = (deno * fact[it.second]) % mod;
    }
    ll final = (fact[n] % mod) * (inverse(deno) % mod) % mod;
    cout << final;
}