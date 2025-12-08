#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll>>arr(n);
    for (ll i = 0; i < n; i++)
     cin >> arr[i].first>>arr[i].second;
    
     sort(arr.begin(),arr.end());
     ll sum=0;
     ll final=0;
      for (ll i = 0; i < n; i++)
      {
        sum=sum+arr[i].first;
        final+=arr[i].second-sum;
      }
      cout<<final;

}