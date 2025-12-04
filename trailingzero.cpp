#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
     cin>>n;
     long long c=0;
     for(int i=5;i<=n;i*=5)
     {
        c+=(long long)(n/i);
     }
     cout<<c;
}