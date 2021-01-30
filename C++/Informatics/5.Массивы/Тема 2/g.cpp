#include <iostream>
#include <climits>
using namespace std;

int main()
{    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int max = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }

    bool isWinner[n];
    for(int i = 0;i<n;i++)
    {
        isWinner[i] = false;
        for(int j = 0;j<m;j++)
        {
            if(max == a[i][j])
            {
                isWinner[i] = true;
            }
        }
    }
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        if(isWinner[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 0;i<n;i++)
    {
        if(isWinner[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}