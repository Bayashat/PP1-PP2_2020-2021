#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx = x1 - x2;
    int dy = y1 - y2;
    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;
    if ((dx+dy)==3 && dx!=0 && dy!=0)
        cout<<"YES";
    else
        cout<<"NO";
}