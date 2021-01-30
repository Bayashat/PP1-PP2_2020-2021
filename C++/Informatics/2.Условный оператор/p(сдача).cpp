#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a = a*100;
    c = c*100;
    int cnt = (c+d)-(a+b);
    
    if(cnt>=100)
    {
        cout << cnt/100 << " " << cnt%100;
    }

    else
    {
        cout << 0 << " " << cnt;
    }

    return 0;
}