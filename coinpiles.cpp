#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll a,b;
    cin >>a>>b;
    if(max(a,b)<=2*min(a,b)&&(a+b)%3==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}