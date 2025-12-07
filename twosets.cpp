#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    if (s % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    s = s / 2;
    ll cur = 0, mx = n;
    vector<ll> a, b, v(n + 1, 0);
    while (cur < s)
    {
        ll rem = s - cur;
        if (rem > mx)
        {
            a.push_back(mx);
            v[mx] = 1;
            cur += mx;
            mx--;
        }
        else
        {
            a.push_back(rem);
            v[rem] = 1;
            cur = s;
        }
    }
    for (ll i = 1; i <= n; i++)
        if (!v[i])
            b.push_back(i);

    cout << a.size() << endl;
    for (ll x : a)
        cout << x << " ";
    cout << endl;
    cout << b.size() << endl;
    for (ll x : b)
        cout << x << " ";
}
