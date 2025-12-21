#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void findz(vector<int> &z, string s)
{
    int l = 0, r = 0;
    for (int k = 1; k < s.length(); k++)
    {
        if (k > r)
        {
            l = r = k;
            while (r < s.length() && s[r] == s[r - l])
                r++;
            z[k] = r - l;
            r--;
        }
        else
        {
            int k1 = k - l;
            if (z[k1] < r - k + 1)
            {
                z[k] = z[k1];
            }
            else
            {
                l = k;
                while (r < s.length() && s[r] == s[r - l])
                {
                    r++;
                }
                z[k] = r - l;
                r--;
            }
        }
    }
}
int main()
{
    string s;
    cin>>s;
      int n=s.length();
    vector<int>z(n);
    findz(z,s);
    for(int i=0;i<n;i++)
    {
        if((z[i]+i)==n)
        cout<<i<<" ";
    }
    cout<<n;
}