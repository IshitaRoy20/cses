#include <bits/stdc++.h>
#define ll long long

using namespace std;
void find(ll c[])
{
    ll m = 0;
    for (ll i = 1000000; i >= 1; i--)
    {
        m = 0;
        for (int j = i; j <= 1000000; j += i)
        {
            m += c[j];
        }
        if (m >= 2)
        {
            cout << i;
            return;
        }
    }
    return;
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll count[1000001] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }

    find(count);
}