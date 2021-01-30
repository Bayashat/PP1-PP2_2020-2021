#include <iostream>
#include <algorithm>
using namespace std;

int main () 
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int j = 0; j < m; j++) 
    {
        cin >> b[j];
    }

    int c[n+m];
    for (int j = 0; j < n; j++) 
    {
        c[j]=a[j];
    }
    for (int j = 0; j < m; j++) 
    {
        c[j+n] = b[j];
    }
    
/*
    for (int i = 0; i < n+m-1; i++) 
    {
        for(int j=0;j<n+m-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
*/
    sort(c,c + (n+m));
    
    for(int i = 0;i<n+m;i++)
    {
        cout << c[i] << " ";
    }


    return 0;
}