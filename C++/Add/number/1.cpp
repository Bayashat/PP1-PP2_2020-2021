//              输出输入的数字之和，但你并不知道会有多少数字会输入
#include <iostream>
using namespace std;

int main()
{
    int n,k=0;

    while(cin >> n)
    {
        k+=n;
    }
    cout << k;
    return 0;
}