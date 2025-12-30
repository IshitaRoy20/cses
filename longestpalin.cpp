#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    const int maxn = 1000005;
    int o[maxn], e[maxn];

    int l = 0, r = -1;
    for (int i = 0; i < n; i++)
    {
        int len = (i > r) ? 1 : min(o[l + r - i], r - i + 1);
        while (i - len >= 0 && i + len < n && s[i - len] == s[i + len])
            len++;
        o[i] = len--;
        if (i + len > r)
        {
            l = i - len;
            r = i + len;
        }
    }

    l = 0, r = -1;
    for (int i = 0; i < n; i++)
    {
        int len = (i > r) ? 0 : min(e[l + r - i + 1], r - i + 1);
        while (i - len - 1 >= 0 && i + len < n && s[i - len - 1] == s[i + len])
            len++;
        e[i] = len--;
        if (i + len > r)
        {
            l = i - len - 1;
            r = i + len;
        }
    }

    int mx = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (o[i] * 2 - 1 > mx)
        {
            mx = o[i] * 2 - 1;
            c = i;
        }
        if (e[i] * 2 > mx)
        {
            mx = e[i] * 2;
            c = i;
        }
    }

    cout << s.substr(c - mx / 2, mx) << "\n";
    return 0;
}
