#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll pw(ll a, ll b)
{
    ll r = 1;
    while (b)
    {
        if (b & 1)
            r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}

ll find(ll n)
{
    ll d = 1, cnt = 9;
    while (n > d * cnt)
    {
        n -= d * cnt;
        cnt *= 10;
        d++;
    }

    ll num = pw(10, d - 1) + (n - 1) / d;
    ll pos = n % d;

    if (pos)
        num /= pw(10, d - pos);
    return num % 10;
}

int main()
{
    ll q;
    cin >> q;
    vector<ll> a(q);
    for (int i = 0; i < q; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
        cout << find(a[i]) << " ";

    cout << endl;
}
