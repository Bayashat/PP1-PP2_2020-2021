//              l至r 的和
#include<iostream>
using namespace std;
int main()
{
    int n,l,r ;
    cin >> n >> l >> r;
    long long ans = 0;

    int a[n];
    for(int i = 1;i<=n;i++)
    {
        cin >> a[i];
    }

    for(int i = l; i<=r;i++)
    {
        ans += a[i];
    }
    cout << ans;
    return 0;
}