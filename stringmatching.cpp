#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n,p;
    cin>>n>>p;
    int c=0;
    for(int i=0;i<n.length()-p.length();i++)
    {
        if(n.substr(i,p.length())==p)
        c++;
    }
    cout<<c;
}