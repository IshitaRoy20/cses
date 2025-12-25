#include <bits/stdc++.h>>
using namespace std;
#define ll long long
bool check(ll mid, ll n, ll t, vector<ll> a)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mid / a[i];
        if (sum >= t)
            return true;
    }
    return false;
}
int main()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    ll mini = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mini = min(mini, a[i]);
    }
    ll low = 1;
    ll high = mini * t;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (check(mid, n, t, a))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans;
}