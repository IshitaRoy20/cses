#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    map<char, int> ft;
    for (char c : s)
        ft[c]++;

    string ans = "";
    char last = '\0';

    for (int pos = 0; pos < n; pos++)
    {
        for (int j = 0; j < 26; j++)
        {
            char ch = 'A' + j;
            if (ft[ch] == 0 || ch == last)
                continue;

            ft[ch]--;

            char m = ch;
            int space = 0;

            for (auto &p : ft)
            {
                char c = p.first;
                int f = p.second;
                if (f > ft[m])
                    m = c;
                space += f;
            }

            bool ok = (ft[m] <= (space + 1) / 2) &&
                      (ft[ch] <= space / 2);

            if (ok)
            {
                ans.push_back(ch);
                last = ch;
                break;
            }
            else
            {
                ft[ch]++;
            }
        }
    }

    if (ans.size() == n)
        cout << ans << endl;
    else
        cout << -1;

    return 0;
}
