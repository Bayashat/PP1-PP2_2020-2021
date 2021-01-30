//              //判断数字是否是质数 (Prime)
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x==1)
    {
        cout << "No" << endl;
        return 0;
    }

    for(int i=2;i*i <= x;i++)
    {
        if(x%i ==0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}