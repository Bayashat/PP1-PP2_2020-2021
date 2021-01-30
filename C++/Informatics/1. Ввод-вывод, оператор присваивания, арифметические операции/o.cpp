#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b,n,c,d,e;
    cin >> a >> b >> n;
    c = a*n;
    d = b*n;
    if(d>=100)
    {
        c += d/100;
        d = d%100;
    }
    cout << c << " " << d;
    
    
    return 0;
}
// 10 15 2 : 20 30