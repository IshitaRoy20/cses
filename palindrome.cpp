#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s, r;
    cin >> s;
    vector<int> a(26);
    for (char c : s)
    {
        a[c - 'A']++;
    }
    ll od = 0;
    for (int i = 0; i < 26; i++)
    {
        od += a[i] % 2;
    }
    if (od > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if ((a[i] % 2) == 0)
        {
            for (int j = 0; j < a[i] / 2; j++)
                r.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if ((a[i] % 2) == 1)
        {
            for (int j = 0; j < a[i]; j++)
                r.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if ((a[i] % 2) == 0)
        {
            for (int j = 0; j < a[i] / 2; j++)
                r.push_back(i + 'A');
        }
    }
    cout << r;
}
