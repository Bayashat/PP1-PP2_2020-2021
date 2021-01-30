#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;
  map<int,int> m;
  for(int i=0;i<n;i++)
  {
    int x; cin>>x;
    m[x]++;
  }
  int k; cin>>k;
  vector<int> v;
  for(int i=0;i<k;i++)
  {
    int x; cin>>x;
    v.push_back(x);
  }
  for(int i=0;i<k;i++)
  {
    cout << m[v[i]] << endl;
  }
  return 0;
}
