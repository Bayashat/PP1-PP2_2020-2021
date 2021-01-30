#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a = a*100;
    int cnt = a+b;
    int x = c*d;
    cout << (cnt-x)/100 << " " << (cnt-x)%100;
    return 0;
}