#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    arr[0] = x;
    for (ll i = 1; i < n; i++)
    {
        arr[i] = (arr[i - 1] * a + b) % c;
    }
    ll i = 0;
    ll ans = 0;
    deque<pair<int, int>> dq;
    for (ll j = 0; j < n; j++)
    {
        while (!dq.empty() && dq.back().first > arr[j])
            dq.pop_back();
        dq.push_back({arr[j], j});

        if (j - i + 1 < k)
            continue;
        else
        {

            ans = ans ^ dq.front().first;
            if (dq.front().second == i)
                dq.pop_front();
            i++;
        }
    }
    cout << ans << endl;
}
