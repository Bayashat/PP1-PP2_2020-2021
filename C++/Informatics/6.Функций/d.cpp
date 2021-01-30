#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool qwe(bool x, bool y,bool z)
{
    if(x==y)
    {
        return x;
    }
    else if(y==z)
    {
        return z;
    }
    else if(x==z)
    {
        return x;
    }
}
int main()
{
    bool x,y,z;
    cin >> x >> y >> z;
    cout << qwe(x,y,z);
}