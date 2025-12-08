#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll diff(ll i, vector<ll> arr, ll s1, ll s2, ll n)
{
    if (i == n)
        return abs(s1 - s2);
    ll x = diff(i + 1, arr, s1 + arr[i], s2, n);
    ll nx = diff(i + 1, arr, s1, s2 + arr[i], n);
    return min(nx, x);
}
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll d = diff(0, arr, 0, 0, n);
    cout << d;
}