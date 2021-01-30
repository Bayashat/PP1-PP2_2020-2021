#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    int best= -1;
    int r = 0;
    int c = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(best<arr[i][j])
            {
                best = arr[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << best << endl << r << " " << c << endl ;


    return 0;
}