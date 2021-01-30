#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,a=540;
    cin >> n;
    a+=n*45;
    for(int i=1;i<n;i=i+2)
    {
        a += 5;
    }
    for(int i=2;i<n;i=i+2)
    {
        a += 15;
    }
    int t,k;
    t = a/60;
    if(t>=24)
    {
        t = t%24;
    }
    k = a%60;
    cout << t << " " << k;
    return 0;
}