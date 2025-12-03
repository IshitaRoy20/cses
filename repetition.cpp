#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int mx = 1;
    int c = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {

        if (s.at(i) == s.at(i + 1))
        {
            c++;
            mx = max(mx, c);
        }
        else
            c = 1;
    }
    cout << mx;
}