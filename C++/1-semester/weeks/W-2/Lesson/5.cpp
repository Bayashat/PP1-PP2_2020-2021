/*      AND 和 OR 和 XOR  运算符
         &     |     ^
    作用：将数字转换为二进制运算，再输出十进制
    &、 | 和 ^ 的真值表如下所示:
    a     b      a&b      a|b      a^b
    0     0       0        0        0
    0     1       0        1        1
    1     1       1        1        0
    1     0       0        1        1
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >>b;

    cout << (a&b) << endl;

    cout << (a|b) << endl;

    cout << (a^b) << endl;

    return 0;
}