#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a, b;
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr.push_back({b, a});
    }
    sort(arr.begin(), arr.end());

    ll temp = arr[0].first;
    ll c = 1;
    for (ll i = 1; i < n; i++)
    {
        if (temp <= arr[i].second)
        {
            c++;
            temp = arr[i].first;
        }
    }
    cout << c;
}