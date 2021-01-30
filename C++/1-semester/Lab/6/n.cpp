#include <iostream>
#include<string>
using namespace std;


void readArray(int a[][1001],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
}

void transpose(int a[][1001],int n,int m)
{
    int x = 0;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(j==x)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
        x++;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    
    int a[n][1001];
    readArray(a,n,m);
    transpose(a,n,m);

    return 0;
}