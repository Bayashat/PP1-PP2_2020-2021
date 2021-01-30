#include <bits/stdc++.h>
using namespace std;

int a[9];

int main()
{
  int x;
  cin>> x;

  for(int i=1;i<10;++i)
  {
    a[i] = 0; 
  }
  a[x]++;
  while(x!=0)
  {
    cin>> x;
    a[x]++;
  }

  for(int i=1;i<10;++i)
  {
    cout << a[i] << " ";
  }
  return 0;
}