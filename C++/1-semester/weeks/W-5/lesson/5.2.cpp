// 二维数组：（导出input.txt里的）输出时可任意选择想输出的行列(2)
#include <iostream>
using namespace std;

int main()
{
    int a[10][10];

    for(int i = 0;i<10;++i)
    {
        for(int j = 0;j<10;++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 1;i<10;i=i+2)   // 只输出1.3.5....行
    {
        for(int j = 0;j<10;++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}