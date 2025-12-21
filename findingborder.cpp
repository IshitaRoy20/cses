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
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<int>lps(n);
    lpsfind(lps,s);
    int max=lps[n-1];
    vector<int>ans;
    while(max>0)
    {
     ans.push_back(max);
     max=lps[max-1];  
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}