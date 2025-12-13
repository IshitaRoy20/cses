#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (ll p1 = 0; p1 < n - 2; p1++)
    {
        ll p2 = p1 + 1;
        ll p3 = n - 1;
        while (p2 < p3)
        {
            ll sum = a[p1].first + a[p2].first + a[p3].first;
            if (sum == k)
            {
                cout << a[p1].second << " " << a[p2].second << " " << a[p3].second;
                return 0;
            }
            else if (sum > k)
                p3--;
            else
                p2++;
        }
    }
    cout<<"IMPOSSIBLE";
}