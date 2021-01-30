#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;cin>>n;
    int a[1000],z=0;
    for(int i=2;i<100000;i++)
    {
        if(z==1000)
        {
            break;
        }
        if(isPrime(i))
        {
            a[z]=i;
            z++;
        }
    }
    cout << a[n-1];
    
    return 0;
}