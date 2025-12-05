#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, x;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = {x, i};
    }
    ll c = 1;
    sort(arr.begin(), arr.end());
    for (ll i = 1; i < n; i++)
    {
        if (arr[i].second < arr[i - 1].second)
            c++;
    }
    cout << c;
}