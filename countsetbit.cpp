#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    {
       ll n;
       cin>>n;

       ll tnum = n+1;
       ll sum = 0;
       for(int i=1;i<=63;i++){
           ll p = pow(2,i);
           ll mid = pow(2,i-1);
            sum+=((tnum/p)*(mid));
            sum+=max(0LL,(tnum%(p))-mid);
         
       }

       cout<<sum<<endl;

    }
    return 0;
}
