#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b==c && a==c)
    {
        cout << 3;
        return 0;
    }
    else
    {
        if(a==b || a==c || b==c)
        {
            cout << 2;
            return 0;
        }
        else
        {
            cout << 0;
        }
    } 
    return 0;
}