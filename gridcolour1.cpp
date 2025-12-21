#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    vector<vector<char>> res(n, vector<char>(m));
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s.clear();
            s.insert(arr[i][j]);
            if (i >= 1 && j >= 0)
                s.insert(res[i - 1][j]);
            if (i >= 0 && j >= 1)
                s.insert(res[i][j - 1]);
            bool f = false;
            for (int k = 0; k < 4; k++)
            {
                char ch = 'A' + k;
                if (s.find(ch) == s.end())
                {
                    res[i][j] = ch;
                    f = true;
                    break;
                }
            }
            if (f == false)
            {
                cout << "IMPOSIIBLE";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << res[i][j];
            cout<<endl;
    }
}