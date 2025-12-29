#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    ll area = 0;
    ll j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (x[j] + x[i]) * (y[j] - y[i]);
        j = i;
    }
    cout << abs(area);
}