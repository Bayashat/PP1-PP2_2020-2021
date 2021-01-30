#include <iostream>
using namespace std;

void readArray(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}

// binary search
bool find3(int *a,int l,int r, int x)
{
    if(l==r)
    {
        if(a[l]==x) return true ;
        else return false;
    }

    int m = (l+r)/2;
    if(a[m] < x) return find3(a,m+1,r,x);
    return find3(a,l,m,x);
}
// binary search iterative
bool find4(int *a,int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int m = (l+r)/2;
        if(a[m]<x) l=m+1;
        else r= m;
    }
    if(l==r && a[l]==x) return true;
    return false;
}
int  main()
{
    int n,l;
    cin >> n;
    int a[n];
    readArray(a,n);
    cin >> l;
    /*if(find3(a,0,n-1,l))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
*/
    if(find4(a,n,l))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    

    return 0;
}