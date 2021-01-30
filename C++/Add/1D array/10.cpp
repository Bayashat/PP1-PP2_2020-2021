//              合并两个数组
#include <iostream>
using namespace std;

int main () 
{
    int n;
    cin >> n;

    int a[n+1];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
  
    int m;
    cin >> m;

    int b[m+1];
    for (int j = 0; j < m; j++) 
    {
        cin >> b[j];
    }
    
    int k;
    int c[n+m+2];
    int x = 0, y = 0;
    a[n] = 1e9 + 17;
    b[m] = 1e9 + 17;

    for (int i =0; i < n + m; ++i) 
    {
        if (a[x] >= b[y]) 
        {
            c[i] = b[y];
            ++ y;
        }
        else 
        {
        c[i] = a[x];
        ++ x;
        }
    }

    for (int i = 0; i < n + m; ++ i) 
    {
    cout << c[i] << " ";
    }
    
    return 0;
}