#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lp[1000001];
ll mo[1000001];

void prime()
{
    for (int i = 2; i <= 1000001; i++)
    {
        if (lp[i] == 0)
        {
            for (int j = i; j <= 1000001; j += i)
            {
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
}

void mobius()
{
    for (int i = 1; i < 1000001; i++)
    {
        if (i == 1)
            mo[i] = 1;
        else
        {
            if (lp[i / lp[i]] == lp[i])
                mo[i] = 0;
            else
                mo[i] = -1 * mo[i / lp[i]];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> freq(1000001, 0);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        freq[val]++;
    }

    prime();
    mobius();

    ll ans = 0;

    for (int i = 1; i <= 1000001; i++)
    {
        if (mo[i] == 0)
            continue;

        ll d = 0;
        for (int j = i; j <= 1000001; j += i)
        {
            d += freq[j];
        }

        ans += (d * (d - 1) / 2) * mo[i];
    }

    cout << ans << endl;
    return 0;
}
