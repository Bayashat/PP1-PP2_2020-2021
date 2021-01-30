// 数组的表示形式
#include <iostream>
using namespace std;

int main()
{
    int a[3];

    a[0] = 1;   // *a=1             也可以这样表示
    a[1] = 12;  // *(a+1)=12
    a[2] = 3;   // *(a+2)=3

    cout << a[0] << a[1] << a[2] << endl;       // 第一种
    cout << *a << *(a+1) << *(a+2) << endl;     // 第二种

    return 0;
}