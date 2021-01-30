//              制作乘法表
#include <iostream>
using namespace std;

int main()
{
    int n,num=0;
    cin >> n;
    int a[n][n];

    for(int i = 0;i<n;i++)
    {
        a[0][i] =num;
        num++;
    }
    num=1;
    for(int j = 1;j<n;j++)
    {
        a[j][0] =num;
        num++;
    }


    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            a[i][j] = a[0][j]*a[i][0];
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0 ; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}