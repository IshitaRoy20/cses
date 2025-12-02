#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, p;
    cin >> n >> p;
    if (p.length() > n.length())
    {
        cout << 0;
        return 0;
    }
    if (n.length() >= 1000000)
    {
        cout << 0;
        return 0;
    }
    int c = 0;
    for (int i = 0; i <= (n.length() - p.length()); i++)
    {
        if (n.substr(i, p.length()) == p)
            c++;
    }
    cout << c;
}