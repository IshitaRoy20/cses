#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<string> r;
    r.push_back(s); 
    while (next_permutation(s.begin(), s.end()))
     r.push_back(s); 

  cout << r.size() <<endl;
  for (int i=0;i<r.size();i++)
   cout<<r[i]<<endl;
}