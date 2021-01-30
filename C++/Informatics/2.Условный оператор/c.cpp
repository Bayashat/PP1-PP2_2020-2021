#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if((n1!=1 && n2!=1) || (n1==1 && n2==1))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}