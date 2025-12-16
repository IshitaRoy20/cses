#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool possible(ll *a, ll n, ll k, ll mid)
{
    ll p = 1, s = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s + a[i] <= mid)
            s += a[i];
        else
        {
            p++;
            s = a[i];
        }
    }
    return p <= k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll low = 0, high = 0;
    for (ll i = 0; i < n; i++)
    {
        low = max(low, a[i]);
        high += a[i];
    }
    ll res = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (possible(a, n, k, mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << res << endl;
}
