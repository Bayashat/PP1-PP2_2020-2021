#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%4==0 || n==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}