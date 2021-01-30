// 输入2个数组，再创建新的数组，将前两个数组按顺序放在第3个数组里，最后再输出第3个数组
#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];

    for(int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    int c[n + m];

    for(int i = 0; i < n; ++i)
    {
        c[i] = a[i];
    }

    for(int i = 0; i < m; ++i)
    {
        c[n + i] = b[i];
    }

    for(int i = 0; i < n + m; ++i){
        cout << c[i] << " ";
    }

    return 0;
}