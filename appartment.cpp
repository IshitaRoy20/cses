#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> pp(n);
    vector<long long> ap(m);
    for (int i = 0; i < n; i++)
        cin >> pp[i];
    for (int i = 0; i < m; i++)
        cin >> ap[i];
    long long c = 0;
    sort(pp.begin(), pp.end());
    sort(ap.begin(), ap.end());
    long long i=0,j=0;
    while(i<n&&j<m)
    {
        if (abs(pp[i] - ap[j]) <=k)
        {
            c++;
            i++;
            j++;
        }
        else if (pp[i]>ap[j])
            j++;
        else if (ap[j]>pp[i])
            i++;
    }
    cout << c << endl;
}
