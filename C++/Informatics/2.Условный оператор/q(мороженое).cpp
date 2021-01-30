#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n!=1 && n!=2 && n!=4 && n!=7)
    {
        cout << "YES";
    }
    else cout << "NO";
    
    return 0;
}