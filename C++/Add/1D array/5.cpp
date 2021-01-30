//              最大的值转成最小的值
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int max=0;
    int min=1000000000;
    for(int i = 0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            a[i]=min;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}