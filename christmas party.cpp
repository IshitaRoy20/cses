#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0 << "\n";
        return 0;
    }

    ll d0 = 1;
    ll d1 = 0;

    for (int i = 2; i <= n; i++)
    {
        ll d2 = ((i - 1LL) * (d1 + d0)) % mod;
        d0 = d1;
        d1 = d2;
    }

    cout << d1 << "\n";
    return 0;
}
