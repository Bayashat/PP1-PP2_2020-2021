//              从右上角到左下角输出1到输入的数字，别的地方都是0
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << "." ;
        }
        cout << i ;
        for(int k=1;k<=i-1;k++)
        {
            cout << "." ;
        }
        cout << endl;
    }
    return 0;
}