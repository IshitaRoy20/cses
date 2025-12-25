#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1000000007;
map<ll, ll> fibo;
ll f(ll n)
{
    auto it = fibo.find(n);
    if (it != fibo.end())
        return it->second;
    ll k = n / 2;
    if (n % 2 == 0)
        return fibo[n] = (f(k) * f(k) + f(k - 1) * f(k - 1)) % mod;
    else
        return fibo[n] = (f(k) * f(k + 1) + f(k - 1) * f(k)) % mod;
}

int main()
{
    ll n;
    fibo[0] = 1;
    fibo[1] = 1;
    cin >> n;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
        cout << f(n - 1);
}
