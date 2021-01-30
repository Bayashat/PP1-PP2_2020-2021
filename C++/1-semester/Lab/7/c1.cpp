#include <iostream>
using namespace std;

void readArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}
/*
bool find(int *a, int n, int x)
{
    bool res = false;

    for(int i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            res= true;
            break;
        }
    }
    return res;
}
*/
bool find2(int *a,int n, int i, int x)
{
    if(i> n-1) return false;    // i>=n 也可以
    if(a[i]==x) return true;
    return find2(a,n,i+1,x);
}
int  main()
{
    int n,l;
    cin >> n;
    int a[n];
    readArray(a,n);
    cin >> l;
    if(find2(a,n,0,l))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}