#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int c = 0;
    vector<long long> arr(n);
    vector<long long> left(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        left[i] = 0;
    }
    stack<pair<int,int>>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&& st.top().first>= arr[i])
        st.pop();
        if(!st.empty())
        left[i]=st.top().second;
        st.push({arr[i],i+1});
    }
    for (int i = 0; i < n; i++)
        cout<<left[i]<<" ";

}

   