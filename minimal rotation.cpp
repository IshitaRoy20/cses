#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s += s;

    int n = s.size();
    vector<int> f(n, -1);
    int r = 0;

    for (int i = 1; i < n; i++)
    {
        char c = s[i];
        int j = f[i - r - 1];

        while (j != -1 && c != s[r + j + 1])
        {
            if (c < s[r + j + 1])
                r = i - j - 1;
            j = f[j];
        }

        if (c != s[r + j + 1])
        {
            if (c < s[r])
                r = i;
            f[i - r] = -1;
        }
        else
        {
            f[i - r] = j + 1;
        }
    }

    cout << s.substr(r, n / 2) << endl;
    return 0;
}
