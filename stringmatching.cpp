#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void lpsfind(vector<int> &lps, string s)
{
    int n = s.length();
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if (s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int find(string s, string f)
{
    int n = s.length();
    int m = f.length();
    vector<int> lps(m);
    lpsfind(lps, f);
    int i = 0, j = 0;
    int count = 0;
    while (i < n)
    {
        if (s[i] == f[j])
        {
            i++;
            j++;

            if (j == m)
            {
                count++;
                j = lps[j - 1];
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
                i++;
        }
    }
    return count;
}
int main()
{
    string s, f;
    cin >> s >> f;
    int k = find(s, f);
    cout << k;
}