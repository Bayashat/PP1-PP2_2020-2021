#include <iostream>
using namespace std;

int main () 
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = 0;
        for(int j=0;j<m;j++)
        {
            b[i] += a[i][j];
        }
    }

    int min = 100001, x=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            min = b[i];
            x = i;
        }
    }
    cout << x+1 << endl;
    return 0;
}