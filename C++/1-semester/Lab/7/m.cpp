#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ex(int n,int x)
{
    if(x==n)
    {
        cout << n ;
        return 0;
    }
    cout << x << " ";
    return ex(n,x=x+1);
}
int main()
{
    int n; cin>>n;
    int x = 1;
    ex(n,x);
    return 0;
}