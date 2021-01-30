#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool qwe(bool x, bool y)
{
    return x^y;
}
int main()
{
    bool x,y;
    cin >> x >> y;
    if(qwe(x,y)==true)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}