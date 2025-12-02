#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, x, a;
    cin >> n >> x;
    int c = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (c == 0)
        {
            if (mp.find(x - a) != mp.end())
            {
                cout << (i + 1) << " " << mp.find(x - a)->second;
                c = 1;
            }
            mp.insert({a, i + 1});
        }
    }
    if (c == 0)
        cout << "IMPOSSIBLE";
}
