#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a,b;
    a = n/60;
    if(a>=24)
    {
        a = a%24;
    }
    b = n%60;
    cout << a << " " << b;

    return 0;
}