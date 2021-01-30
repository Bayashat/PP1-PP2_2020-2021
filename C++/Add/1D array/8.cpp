//             寻找目标值的位置。若没找到，则找比他小的最大的值的位置
#include <iostream>
using namespace std;

int main()
{
    int n,m,max;
    cin >> n >> m;

    int arr[n];
    for(int i = 1;i<=n;i++)
    {
        cin >> arr[i];
    }

    
    for(int i = 1;i<=n;i++)
    {
        if(arr[i] <= m)
        {
            max = i;
        }
    }
    cout << max << endl;
    return 0;
}  