#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x, n;
    cin >> x >> n;
    set<ll> s;
    multiset<ll> gap;
    ll a;
    s.insert(0);
    s.insert(x);
    gap.insert(x);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        auto temp = s.upper_bound(a);
        auto r = temp;
        auto l = --temp;
        s.insert(a);
        gap.erase(gap.find(*r - *l));
        gap.insert(a - *l);
        gap.insert(*r - a);
        cout << *gap.rbegin() << " ";
    }
}