#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int m = 1000000007;
const int m1 = 1000000006;
ll inv(ll a, ll md)
{
    if (a == 1)
        return 1;
    return (md - (md / a) * inv(md % a, md) % md + md) % md;
}
ll pw(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll t = pw(a, b / 2);
    t = (t * t) % m;
    if (b & 1)
        t = (t * a) % m;
    return t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll p[n], e[n];
    for (int i = 0; i < n; i++)
        cin >> p[i] >> e[i];
    ll d = 1;
    for (int i = 0; i < n; i++)
        d = (d * (e[i] + 1)) % m;
    ll s = 1;
    for (int i = 0; i < n; i++)
    {
        ll t = (pw(p[i], e[i] + 1) - 1 + m) % m;
        t = (t * inv(p[i] - 1, m)) % m;
        s = (s * t) % m;
    }
    ll ex = 1;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if ((e[i] % 2 == 1) && f == false)
        {
            ex = (ex * ((e[i] + 1) / 2)) % m1;
            f = true;
        }
        else
            ex = (ex * (e[i] + 1)) % m1;
    }
    if (f == false)
        for (int i = 0; i < n; i++)
            e[i] /= 2;

    ll base = 1;
    for (int i = 0; i < n; i++)
        base = (base * pw(p[i], e[i])) % m;

    ll pr = pw(base, ex);

    cout << d << " " << s << " " << pr;
    return 0;
}
