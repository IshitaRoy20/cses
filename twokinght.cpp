#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll find(ll x)
{
    ll tot = (x * x * (x * x - 1)) / 2;
    ll attack = 4 * (x - 1) * (x - 2);
    ll ans = (tot - attack);
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cout << find(i) << endl;
}